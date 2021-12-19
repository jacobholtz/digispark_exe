#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	char rm[] = "rm ";
	char path[] = "argv[0]";
	getchar();
	strcat(rm,path);
	system(rm);
	getchar();
	return 0;
}