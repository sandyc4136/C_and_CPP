#include<iostream>
using namespace std;

//int *const x = &a;
//int *const y = &b;
void swap_number( int *const x, int *const y ){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main( void ){
	int a = 10;
	int b = 20;

	swap_number( &a, &b );	//adress of a , b are arguments; we are passing passing it by address  to the function

	cout << "a	:	" << a << endl;	//20
	cout << "b	:	" << b << endl;	//10
	return 0;
}
