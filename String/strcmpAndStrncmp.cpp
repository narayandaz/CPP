#include <string.h>
#include <stdio.h>

int main( void ){
	char *S1 = "Hello World!";
	char *S2 = "Hello World!";
	char *S3 = "Hello Universe!";

	printf("S1 = %s\n",S1);
	printf("S2 = %s\n",S2);
	printf("S3 = %s\n\n",S3);

	printf("strcmp( S1 , S2 ) = %d\n",strcmp(S1,S2));
	printf("strcmp( S1 , S3 ) = %d\n",strcmp(S1,S3));
	printf("strcmp( S3 , S1 ) = %d\n\n",strcmp(S3,S1));

	printf("strncmp( S1 , S3 , 6 ) = %d\n",strncmp( S1 , S3 , 6 ));
	printf("strncmp( S1 , S3 , 7 ) = %d\n",strncmp( S1 , S3 , 7 ));
	printf("strncmp( S3 , S1 , 7 ) = %d\n\n",strncmp( S3 , S1 , 7 ));

	
	char string1[] = "The quick brown dog jumps over the lazy fox";
	char string2[] = "The QUICK brown dog jumps over the lazy fox";

	printf("string1 = %s\n",string1);
	printf("string2 = %s\n\n",string2);

	printf("string1 is ");
	if (strcmp(string1,string2) == 0)
		printf("equal to");
	else if (strcmp(string1,string2) > 0)
		printf("greater than");
	else if (strcmp(string1,string2) < 0)
		printf("lower than");
	printf(" string2.\n");

	return 0;
}
