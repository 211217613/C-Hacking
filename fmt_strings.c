#include <stdio.h>
#include <string.h>

int main(){
	char string[10];
	int A = -73;
	int count_one, count_two;
	unsigned int B = 31337;

	strcpy(string, "sample");

	printf("[A] Dec: %d, Hex: %x, unsigned: %u\n",A, A,A);
	printf("[B] Dec: %d, Hex: %x, unsigned: %u\n",B, B, B);
	printf("The number of bytes written up to this point X%n \
	is being stored in count_one, and the number of bytes \
	up to here X%n is being stored in count_two.\n", &count_one, &count_two);
	printf("count_one: %d\n", count_one );
	printf("count_two: %d\n", count_two );
	printf("A is %d and is at %#08x. B is %#08x. \n", A, &A );
	return 0;
}