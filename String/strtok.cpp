#include <string.h>
#include <stdio.h>

int main( void ){
	char string[] = "A string\tof ,,tokens\nand some  more tokens";
	char seps[]   = " ,\t\n";
	char *token;

	printf( "%s\n\nTokens:\n", string );
	token = strtok( string, seps );
	while( token != NULL ){
		printf( " %s\n", token );
		token = strtok( NULL, seps );
	}
	return 0;
}
