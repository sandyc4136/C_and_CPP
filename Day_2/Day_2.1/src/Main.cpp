#include<cstdio>
//#define NULL 0
int main(void){
	int number=10;
//	int *ptr;
	int *ptr=&number;
	printf("%p \n",ptr);
	printf("%d \n",*ptr);
	return 0;
}
