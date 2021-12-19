#include <stdio.h>
#include <stdlib.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	char path[] = "argv[0]";
	getchar();
	system(strcat('rm ',path));
	getchar();
	return 0;
}