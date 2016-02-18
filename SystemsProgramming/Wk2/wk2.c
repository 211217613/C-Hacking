#include <stdio.h>
#include <stdlib.h>

extern char ** environ;

int main(){	
	char* s = getenv("USER");
	printf("user is: %d\n", s );
	const int consint;

	// consint = 32432;

	int data[5] = {10, 30, 60, 50, 40};
	char string[] = "A B C 0123";
	unsigned int temp;
	printf("data: %d\n", *(data + 1));

	printf("Swapping\n");

	temp = data[0];
	data[0] = data[4];
	data[4] = temp;
	for(size_t idx = 0; idx < 5; idx++){
		printf("data[%zu] = %d\n", idx, *(data + idx) );
	}


	return 0;
}