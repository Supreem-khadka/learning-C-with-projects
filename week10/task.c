// Create an integer array with 10 integers and then print the number of elements in the array to the terminal
// Author -> Supreem Khadka


#include <stdio.h>

int main(void){
	
	// creating an array with 10 elements
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("The array has %i elements\n", size);
}
