// Initialize an int array with 10 elements and then print the value of the array
//
// Author -> Supreem Khadka


#include <stdio.h>
#include <stdlib.h>

int main(void){
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%p %p\n", numbers, &numbers[0]);

	int *ptr_num = malloc(sizeof(int) * 10);
	if (ptr_num == NULL){
		return 1;
	}
	for (int i = 0; i < 10; i++){
		*(ptr_num + i) = i +1;
	}
	
	for (int i = 0; i < 10; i++){
		printf("%i\n", *(ptr_num + i));
	}
	
	printf("%p \t%p\n", ptr_num, &ptr_num);
	*ptr_num = 500; 
	printf("%p \t%p\n", ptr_num, &ptr_num);
	printf("%i\n", *ptr_num);
	
}
