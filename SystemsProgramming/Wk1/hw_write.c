/* Using syscall write to get output
man write to see usage
ssize_t write(int fd, const void *buf, size_t count);
write- writes up to count bytes to fd where fd is stderr, stdout

*/ 

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

//Are defined in unistd.h
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

int main(){
	int mode = S_IRUSR | S_IWUSR; 
	//open is different then fopen
	int fd = open("output.txt", O_CREAT |  O_TRUNC | O_RDWR, mode);

	write(STDOUT_FILENO, "this is an erorroror\n", 21); //without error checking
	if ( -1 == write(STDERR_FILENO, "t\n", 2 ) ) //with error checking 
		puts("error with error");
	write(fd, "great!\n", 7);
	close(fd);


	return 0;  //in bash use 'echo $?' to print last programs exit code

}