#include <stdio.h>
#include <unistd.h>
int a; // in BSS
static int b; // in BSS, BSS is usually zeroed out

int main(){
	static int c; // are static variables zeroed?        ____
	char * ptrr = "Hello";
	ptrr += 2;
	int *ptr; //  holds a memory address 			ptr |____|
	*ptr = 0xAA;
	printf("addr of ptr is: %#x\n", &ptr );
	printf("contents of ptr is: %#x\n", *ptr );
	printf("ptr is: %#x\n", ptr );
	// printf("%d %d %d %d\n",a,b,c,d );
	return 0;
}