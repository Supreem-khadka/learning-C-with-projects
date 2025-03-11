// Take two command line arguments from the user, their first and last name
// and then print a welcome message for the user.
// Author -> Supreem Khadka

#include <stdio.h>

int main(int argc, char *argv[]){

	if(argc == 3){
		printf("Hello, %s %s#\n", argv[1], argv[2]);
		return 0;
	}
	else{
		printf("Usage: ./out Firstname Lastname#\n");
		return 1;
	}
}
