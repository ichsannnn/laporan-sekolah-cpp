object DM1: TDM1
  OldCreateOrder = False
  Height = 151
  Width = 250
  object config: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=ariefset_' +
      'tb;Data Source=laporan;Initial Catalog=ariefset_trueblue'
    LoginPrompt = False
    Left = 112
    Top = 16
  end
  object QuerySekolah: TADOQuery
    Active = True
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from siswa;')
    Left = 32
    Top = 72
  end
  object DSSekolah: TDataSource
    DataSet = QuerySekolah
    Left = 112
    Top = 72
  end
  object QueryUser: TADOQuery
    Active = True
    Connection = config
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from user;')
    Left = 192
    Top = 72
  end
end
