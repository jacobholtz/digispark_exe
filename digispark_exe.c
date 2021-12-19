#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	getchar();
	system("rm %USERPROFILE%\\d.exe");
	getchar();
	return 0;
}