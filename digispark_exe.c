#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	getchar();
	remove(argv[0]);
	getchar();
	return 0;
}