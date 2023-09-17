#include<cstdio>
//#define NULL 0
void task(int x){
		  printf("Number    :   %d\n", x); //10
		  x = x + 5;
		  printf("Number    :   %d\n", x); //15
	}

int main( void ){
	int *ptrNumber = NULL; //Initialzation
	int number = 10;  //Initialzation
	ptrNumber = &number;  //Assignment
	//How will you print value 10
	printf("Value : %d\n", number);//10
	printf("Value : %d\n", *ptrNumber); //10
	task(20);
	return 0;
}

