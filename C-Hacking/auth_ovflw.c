#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_auth(char * password){
	int auth_flag = 0;
	char password_buffer[16];
	strcpy(password_buffer, password);

	if( 0 == strcmp(password_buffer, "brillig") )
		auth_flag = 1;
	if( 0 == strcmp(password_buffer, "outgrabe") )
		auth_flag = 1;

	return auth_flag;
}

int main(int argc, char* argv[]){
	if(argc < 2){
		printf("Usage: %s <password> \n", argv[0]);
		exit(0);
	}
	if( check_auth(argv[1]) ){
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("	Access Granted.\n");
		printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	} else{
		printf("\nAccess Denied\n");
	}
}