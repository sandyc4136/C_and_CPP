#include<stdio.h>
int main( void ){
	int number;
	typedef unsigned int size_t;
	size_t size = sizeof(int);
	printf("Size : %u\n",size);
	size = sizeof(int);
	printf("Size : %u\n",size);
	printf("Address : %p \n",&size);


	return 0;
}



