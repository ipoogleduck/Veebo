Set WshShell = CreateObject("WScript.Shell") 
WshShell.Run chr(34) & "C:\Veebo\Vcheck.bat" & Chr(34), 0
Set WshShell = Nothing