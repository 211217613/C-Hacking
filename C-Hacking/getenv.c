#include <stdio.h>

int main(int argc, char **argv, char **env){
	int index;
	for(index = 0; index < 100; index++){
		printf("env[%d]: %s :: %#x\n",index, env[index], &env[index]);
	} 
	return 0;
}0xbfb2a26c