#include "stdio.h"
#include "string.h"

void function(char *str){
	char buffer[16];

	strcpy(buffer,str);
}
void main(int argc, char **argv){

	char large_string[256];
	int i;

	for(i = 0;i < 255; i++){
		large_string[i] = 'A';
	}

	function(large_string);
	printf("Done\n");
}
