#include <string.h>
#include <stdio.h>

int main( void ){
	char buffer[61] = "How long am I?";
	int  len;
	len = strlen( buffer );
	printf( "'%s' is %d characters long\n", buffer, len );
	return 0;
}
