//---------------------------------------------------------------------------

#ifndef Sqlite3UnitH
#define Sqlite3UnitH
//---------------------------------------------------------------------------
#include <iostream>
#include "sqlite3.h"

std::string DateConvert(int64_t timestamp);


class SQLiteHistory
{
protected:
	sqlite3 *Database;
	sqlite3_stmt *pStatement;
	bool DatabaseOpened;
	bool StatementPrepared;
    bool Steped;
public:
	SQLiteHistory();
	bool OpenDatabase(const wchar_t* fileName);
	bool PrepareStatement();
	bool Step();
	uint64_t GetId();
	wchar_t* GetUrl();
	wchar_t* GetTitle();
	int64_t GetLastVisit();

};



#endif
