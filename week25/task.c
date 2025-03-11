// pair the read() and write() syscalls to create and then write into the file
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
// #include <sys/stat.h>


int main(void)
{
	int fd = open("example.txt", O_WRONLY | O_CREAT, S_IRWXU);

	if (fd < 0)
	{
		printf("Unable to create the file!!!!\n");
		return 1;
	}

	printf("Successfully created the file with file descriptor %d !#\n", fd);
	char buffer[20] = "Hello World";
	
	int sz = write(fd, buffer, strlen(buffer));

	if (sz < 0)
	{
		printf("Unable to write to the file\n");
		return 1;
	}

	printf("Successfully written %d bytes in the file\n", sz);
	if (close(fd) == -1)
	{
		printf("Unable to close file!!!\n");
		return 1;
	}
	printf("Successfully closed the file!#\n");
	return 0;
}
