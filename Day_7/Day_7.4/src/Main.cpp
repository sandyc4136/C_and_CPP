#include<iostream>
using namespace std;

//int &x = a;	//int *const x = &a;
//int &y = b;	//int *const y = &b;
void swap_number( int &x, int &y ){
	int temp = x;	//int temp = *x;
	x = y;			//*x = *y;
	y = temp;		//*y = temp;
}
int main( void ){
	int a = 10;
	int b = 20;

	swap_number( a, b );	//Function call by reference

	cout << "a	:	" << a << endl;	//20
	cout << "b	:	" << b << endl;	//10
	return 0;
}
