#include <string.h>
#include <stdio.h>

int main ( void ){
	char Str1[15] = "Hello ";
	char Str2[15] = "World!";
	strcat(Str1,Str2);
	printf("%s\n\n",Str1);
	char string[80] = "This is the initial string!";
	char suffix[] = " extra text to add to the string...";
	printf( "Before: %s\n", string );
	strncat( string, suffix, 19 );
	printf( "After:  %s\n", string );

	return 0;
}
