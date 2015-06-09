#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char text[1024] = {};
	static int test_val = -72;

	if( 2 > argc ){
		printf("Usage: %s <text to print>\n", argv[0]);
		exit(0);
	}

	strcpy(text, argv[1]);

	printf("The right way to print user-controlled input:\n");
	printf("%s\n", text );

	printf("\nThe wrong way to print user-controlled input:\n");
	printf(text);

	puts("");

	//DEBUG
	printf("[*] test_val @ %#x = %d %#x\n", &test_val, test_val, test_val );
}