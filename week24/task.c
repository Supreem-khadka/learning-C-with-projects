// Build a C program that executes syscalls
// Use the open() syscalls only here, it should be noted that technically we are not making
// syscalls directly in the user programs, but instead are using wrapper function defined
// in "libc" for our purposes
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <unistd.h>	//  contains all the syscall wrappers functions we need
#include <fcntl.h>	// contains all the file control functions
#include <sys/stat.h>

int main(void)
{
	int fd = open("new.txt", O_WRONLY | O_CREAT, S_IRWXU);
	
	if (fd < 0)
	{
		printf("The open operation failed!!!!\n");
		return 1;
	}
	printf("The open operation succeeded!!!!\n");
	printf("The file descriptor is: %d\n", fd);
	return 0;
}
