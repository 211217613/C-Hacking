#include <stdio.h>
#include <limits.h>

int main(){
	printf("Hello C data types. int min & max \n %d %d\n\n", INT_MIN, INT_MAX);
	printf("Char is a least 8bits\n");
	printf("char is %d bITS\n", CHAR_BIT );
	printf("sizeof(short) is %lu bytes\n", sizeof(short) );
	printf("sizeof(long) is %lu bytes\n", sizeof(long) );


	return 0;
}