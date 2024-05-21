//---------------------------------------------------------------------------
#include "sqlite3.h"
#pragma hdrstop

#include "Sqlite3Unit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

std::string DateConvert(int64_t timestamp)
{  //������� ����������� ��������� ����� �� 64-��� � ������
	std::string result;
	//timestamp - ��� ���������� ����������� ������� � 01/01/1601 00:00:00
	//���������� ����� 11644473600 - ���  ������� � �������� �����
	//01/01/1601 00:00:00 � 01/01/1970 00:00:00
	int64_t unixFormat = (timestamp/1000000) - 11644473600;

	time_t datetime = (time_t)unixFormat;

	result = ctime(&datetime);

    return result;
}

SQLiteHistory::SQLiteHistory()
{
	DatabaseOpened = false;
	StatementPrepared = false;
	Steped = false;
}

bool SQLiteHistory::OpenDatabase(const wchar_t* fileName)
{
	int openResult = sqlite3_open16(fileName, &Database);
	if(openResult != SQLITE_OK)//���� �� ������ ������� ���� ������
	{
		sqlite3_close(Database);
		DatabaseOpened = false;
		return false;
	}

	// ���������, �������� �� �������� ���� ����� ������ ������� ��������
	const char* query = "SELECT count(*) FROM urls";
	char* errorMessage;
	int result = sqlite3_exec(Database, query, NULL, NULL, &errorMessage);
	if(result != SQLITE_OK)
	{
		sqlite3_close(Database);
		sqlite3_free(errorMessage);
		DatabaseOpened = false;
		return false;
	}
    DatabaseOpened = true;
	return true;
}

bool SQLiteHistory::PrepareStatement()
{
	if(DatabaseOpened)
	{
        int execResult = sqlite3_prepare16_v2(Database,
										 L"SELECT id, url, title, last_visit_time FROM urls",
										 -1,
										 &pStatement, NULL);
		if(execResult != SQLITE_OK)
		{
			StatementPrepared = false;
			sqlite3_close(Database);
			return false;
		}
		StatementPrepared = true;
		return true;
	}
    return false;
}

bool SQLiteHistory::Step()
{
	if(StatementPrepared)
	{
		int stepResult = sqlite3_step(pStatement);
		if(stepResult != SQLITE_ROW)
		{
			Steped = false;
			return false;
		}
		Steped = true;
		return true;
	}
    Steped = false;
	return false;
}

uint64_t SQLiteHistory::GetId()
{
	if(Steped == true)
	{
		return sqlite3_column_int64(pStatement, 0);
	}
    return 1;
}

wchar_t* SQLiteHistory::GetUrl()
{
	if(Steped == true)
	{
		return (wchar_t*)sqlite3_column_text16(pStatement, 1);
	}
	std::wstring NoData{L"��� ������"};
	return NoData.data();
}
wchar_t* SQLiteHistory::GetTitle()
{
	if(Steped == true)
	{
		return (wchar_t*)sqlite3_column_text16(pStatement, 2);
	}
	std::wstring NoData{L"��� ������"};
	return NoData.data();
}
int64_t SQLiteHistory::GetLastVisit()
{
	if(Steped == true)
	{
        return sqlite3_column_int64(pStatement, 3);
	}
	return 1;
}

bool SQLiteHistory::DeleteEntry(uint64_t Id)
{
	char *errmsg; //����������-��������� ���� ������������ ������
	std::string request = "DELETE FROM urls WHERE id=" + std::to_string(Id);
	int execResult = sqlite3_exec(Database, request.c_str(), NULL, 0, &errmsg);
	if(execResult != SQLITE_OK)
	{
        return false;
	}
	return true;
}

bool SQLiteHistory::ClearHistory()
{
	if(DatabaseOpened)
	{
		char *errmsg; //����������-��������� ���� ������������ ������
		std::string request = "DELETE FROM urls";
		int execResult = sqlite3_exec(Database, request.c_str(), NULL, 0, &errmsg);
		if(execResult != SQLITE_OK)
		{
			return false;
		}
		return true;
	}
    return false;
}



