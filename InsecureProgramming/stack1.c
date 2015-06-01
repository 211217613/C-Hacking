/* stack1-stdin.c                               *
 * specially crafted to feed your brain by gera */

#include <stdio.h>

int main() {
	int cookie;
	char buf[10];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);

	printf("cookie: %x\n", *(&cookie));

	if (cookie == 0x41424344)
		printf("you win!\n");
}
