object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsToolWindow
  Caption = 'Half-Life 2 AutoPistol v1 :: by Igrom4nru'
  ClientHeight = 269
  ClientWidth = 402
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = closehandle2
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 35
    Height = 13
    Caption = 'Status:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object status: TLabel
    Left = 49
    Top = 8
    Width = 105
    Height = 13
    Caption = 'Waiting for Half-Life 2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object copyright: TLabel
    Left = 136
    Top = 248
    Width = 112
    Height = 13
    Caption = 'Igrom4nru (C) 2009'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clOlive
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object aubox: TCheckBox
    Left = 24
    Top = 40
    Width = 65
    Height = 17
    Caption = 'Turn on'
    Color = clBtnFace
    ParentColor = False
    TabOrder = 0
    OnClick = los1
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 30
    OnTimer = ontim1
    Left = 240
    Top = 16
  end
  object Timer2: TTimer
    Interval = 150
    OnTimer = Timer2Timer
    Left = 184
    Top = 16
  end
end
