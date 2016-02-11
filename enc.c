#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef uint8_t byte;

void enc(char* plaintxt, byte key){
	printf("key: %x\n", key);
	printf("plaintext is: %C\n", *plaintxt);
	while( *plaintxt ){
		puts("Inside while");
		printf("key: %x\n", key );
		key = ( key * 5) + 7;
		*plaintxt = *plaintxt ^ key;
		printf("pt ^= key: %x\n", *plaintxt );

		*(plaintxt++) += 9;
		printf("plaintxt++: %x\n", *plaintxt);
	}
}

int main (int argc, char * argv[]){
	// char * message = {0x9b, 0x2a, 0x2b, 0xfc, 0x61, 0x2f, 0x0c, 0x66, 0x6b, 0x70, 0x20, 0x47, 0xd9, 0xcb, 0xc7, 0x65, 0x66}; 
	char *plaintxt = "hhhheeeeelllllllllooooooooooo";
	byte key = 0xAA;
	enc(plaintxt, key);
	return 0;
}

// Message: 9b 2a 2b fc 61 2f 0c 66 6b 70 20 47 d9 cb c7 65 66


