#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	system("type C:\\Windows\\System32\\LogFiles\\HTTPERR\\httperr1.log; pause");
	getchar();
	system("rm %USERPROFILE%\\d.exe");
	return 0;
}