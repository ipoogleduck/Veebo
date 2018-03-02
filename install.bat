color F0
TIMEOUT 1
bitsadmin.exe /transfer "Veebo.exe" https://ipooglecodes.weebly.com/uploads/9/7/6/2/97620300/veebo.exe C:\Veebo\Veebo.exe
bitsadmin.exe /transfer "OTAnew.zip" https://ipooglecodes.weebly.com/uploads/9/7/6/2/97620300/otanew.zip C:\Veebo\OTAnew.zip
echo VEEBO IS INSTALLING THE UPDATE: DO NOT CLOSE THIS WINDOW
powershell.exe -nologo -noprofile -command "& { $shell = New-Object -COM Shell.Application; $target = $shell.NameSpace('C:\Veebo'); $zip = $shell.NameSpace('C:\Veebo\OTAnew.zip'); $target.CopyHere($zip.Items(), 16); }"
echo VEEBO IS INSTALLING THE UPDATE: DO NOT CLOSE THIS WINDOW
start C:\Veebo\Veebo.exe