#include <stdio.h>
#include <stdlib.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	getchar();
	system("powershell -exec bypass -C \"rm argv[0]\" ";
	return 0;
}