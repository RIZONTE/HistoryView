object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'MainForm'
  ClientHeight = 517
  ClientWidth = 694
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object FilePathLabel: TLabel
    Left = 8
    Top = 323
    Width = 151
    Height = 20
    BiDiMode = bdLeftToRight
    Caption = #1054#1090#1082#1088#1099#1090#1099#1081' '#1092#1072#1081#1083' '#1079#1076#1077#1089#1100
    Color = clSkyBlue
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentBiDiMode = False
    ParentColor = False
    ParentFont = False
    Transparent = False
  end
  object LastVisit: TLabel
    Left = 8
    Top = 280
    Width = 200
    Height = 20
    Caption = #1044#1072#1090#1072' '#1087#1086#1089#1083#1077#1076#1085#1077#1075#1086' '#1087#1086#1089#1077#1097#1077#1085#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object DatebaseStringTree: TVirtualStringTree
    Left = 0
    Top = 0
    Width = 694
    Height = 257
    ParentCustomHint = False
    Align = alTop
    BiDiMode = bdLeftToRight
    Ctl3D = True
    DefaultNodeHeight = 19
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    Header.AutoSizeIndex = 0
    Header.Background = clCaptionText
    Header.Options = [hoColumnResize, hoDrag, hoShowSortGlyphs, hoVisible]
    ParentBiDiMode = False
    ParentCtl3D = False
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 0
    TreeOptions.PaintOptions = [toShowButtons, toShowDropmark, toThemeAware, toUseBlendedImages, toFullVertGridLines]
    TreeOptions.SelectionOptions = [toFullRowSelect, toSelectNextNodeOnRemoval]
    OnAddToSelection = DatebaseStringTreeAddToSelection
    OnGetText = DatebaseStringTreeGetText
    Touch.InteractiveGestures = [igPan, igPressAndTap]
    Touch.InteractiveGestureOptions = [igoPanSingleFingerHorizontal, igoPanSingleFingerVertical, igoPanInertia, igoPanGutter, igoParentPassthrough]
    Columns = <
      item
        Color = clWhite
        Hint = 'Hint'
        Options = [coAllowClick, coDraggable, coEnabled, coParentBidiMode, coResizable, coShowDropMark, coVisible, coAllowFocus, coEditable]
        EditOptions = toHorizontalEdit
        Position = 0
        Text = 'Id'
        Width = 100
      end
      item
        Color = clWhite
        MaxWidth = 550
        Options = [coAllowClick, coDraggable, coEnabled, coParentBidiMode, coResizable, coShowDropMark, coVisible, coSmartResize, coAllowFocus, coEditable]
        EditOptions = toHorizontalEdit
        Position = 1
        Text = 'Url'
        Width = 300
      end
      item
        MaxWidth = 550
        Options = [coAllowClick, coDraggable, coEnabled, coParentBidiMode, coParentColor, coResizable, coShowDropMark, coVisible, coSmartResize, coAllowFocus, coEditable, coStyleColor]
        Position = 2
        Text = #1047#1072#1075#1086#1083#1086#1074#1086#1082
        Width = 205
      end>
  end
  object OpenDatabaseButton: TButton
    Left = 8
    Top = 368
    Width = 153
    Height = 41
    Caption = #1054#1090#1082#1088#1099#1090#1100' '#1073#1072#1079#1091' '#1076#1072#1085#1085#1099#1093
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = OpenDatabaseButtonClick
  end
  object FillNode: TButton
    Left = 176
    Top = 368
    Width = 153
    Height = 41
    Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1100' '#1090#1072#1073#1083#1080#1094#1091
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = FillNodeClick
  end
  object DeleteButton: TButton
    Left = 344
    Top = 368
    Width = 153
    Height = 41
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1079#1072#1087#1080#1089#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = DeleteButtonClick
  end
  object ClearHistory: TButton
    Left = 512
    Top = 369
    Width = 153
    Height = 41
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100' '#1080#1089#1090#1086#1088#1080#1102
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = ClearHistoryClick
  end
  object OpenDBdialog: TOpenDialog
    Left = 64
    Top = 432
  end
end
