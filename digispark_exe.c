#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int c, char *argv[]){
	printf("exe executed\n");
	getchar();
	if(remove(argv[0]) == 0){
		printf("file deleted");
	} else {
		printf("file not deleted");
	}
	getchar();
	return 0;
}