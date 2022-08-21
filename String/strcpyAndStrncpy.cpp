#include <string.h>
#include <stdio.h>

int main ( void ){
	char X[] = "Hello World!";
	char Y[15],Z[15];
	printf("%s\n",strcpy(Y,X));
	printf("X : %s\n",X);
	printf("Y : %s\n\n",Y);
	strncpy(Z,X,5);
	Z[5] = '\0';
	printf("Z : %s\n\n",Z);
	char string[100] = "Cats are nice usually";
	printf ( "Before: %s\n", string );
	strncpy( string, "Dogs", 4 );
	strncpy( string + 9, "mean", 4 );
	printf ( "After:  %s\n", string );

	return 0;
}
