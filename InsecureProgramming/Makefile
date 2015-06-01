# *.out so as to be ignored by .gitignore
CFLAGS = -fno-stack-protector
DEBUG = -ggdb 
stack1: stack1.c 
	gcc $(DEBUG) $(CFLAGS) -Wmultichar  -o stack1.out stack1.c

stack2: stack2.c 
	gcc -ggdb $(CFLAGS)l -o stack2.out stack2.c

stack3: stack3.c 
	gcc -ggdb -fno-stack-protector -o stack3.out stack3.c

stack4: stack4.c 
	gcc -ggdb -fno-stack-protector -o stack4.out stack4.c

stack5: stack5.c 
	gcc -ggdb -fno-stack-protector -o stack5.out stack5.c

stack6: stack6.c
	gcc $(DEBUG) $(CFLAGS) -o stack6.out stack6.c

clean:
	rm *.out
