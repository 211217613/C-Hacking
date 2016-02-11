all:
	
format: fmt_strings.c
	gcc -Wall -ggdb -o fmt_strings.out fmt_strings.c
fmt: fmt_vln.c
	gcc -Wall -ggdb -o fmt_vln.out fmt_vln.c
getenv: getenv.c
	gcc -Wall -o getenv.out getenv.c
clean:
	rm *.out