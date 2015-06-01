/* stack3-stdin.c                               *
 * specially crafted to feed your brain by gera */

#include <stdio.h>
void canNeverExecute(){
	puts("Your LEET!!");
	exit(0);
}

void print(char buf[], int cookie){
	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
}

int main(void) {
	int cookie;
	char buf[8];
	print(buf[], &cookie);

	gets(buf);

	if (cookie == 0x01020005)
  		printf("you win!\n");
}
