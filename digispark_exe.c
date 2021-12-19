#include <stdio.h>
#include <stdlib.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	getchar();
	remove(argv[0]);
	return 0;
}