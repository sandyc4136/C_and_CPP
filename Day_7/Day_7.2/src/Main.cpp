#include<iostream>
using namespace std;

void swap_number( int x, int y ){
	int temp = x;
	x = y;
	y = temp;
}
int main( void ){
	int a = 10;
	int b = 20;

	swap_number( a, b );	//a , b are arguments; we are passing passing it by value to the function

	cout << "a	:	" << a << endl;	//10
	cout << "b	:	" << b << endl;	//20
	return 0;
}
