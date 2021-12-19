#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	system("systeminfo");
	getchar();
	system("rm %USERPROFILE%\\d.exe");
	return 0;
}