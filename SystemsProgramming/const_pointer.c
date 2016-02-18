#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>
/*
* Working with const, const *, * const, const * const
*/

int main(){

	const int const1 = 96; 		// const1 cannot be changed and is a constant integer value stored in....
	unsigned int var, retValue;
	retValue = scanf("%d", &var);
	errno = 0;
	if (retValue == 0){
		printf("No error\n");
	}
	else 
		perror("scanf");

	printf("addr of const1 is:\t%p\n", &const1);
	printf("addr of var is: \t%p\n", &var);
	return 0;
}