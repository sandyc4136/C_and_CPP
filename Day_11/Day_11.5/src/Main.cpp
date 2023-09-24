#include<iostream>
#include<string>
using namespace std;

void swap_object( char &object1, char &object2 ){
	char temp = object1;
	object1 = object2;
	object2 = temp;
}

void swap_object( int &object1, int &object2 ){
	int temp = object1;
	object1 = object2;
	object2 = temp;
}

void swap_object( double &object1, double &object2 ){
	double temp = object1;
	object1 = object2;
	object2 = temp;
}

void swap_object( string &object1, string &object2 ){
	string temp = object1;
	object1 = object2;
	object2 = temp;
}

int main( void ){
	char ch1 = 'A';
	char ch2 = 'B';

	swap_object( ch1, ch2 );

	cout << "ch1	:	" << ch1 << endl;
	cout << "ch2	:	" << ch2 << endl;


	int a = 10;
	int b = 20;

	swap_object( a, b );

	cout << "a	:	" << a << endl;
	cout << "b	:	" << b << endl;


	double x = 10.5;
	double y = 20.5;

	swap_object( x, y );

	cout << "X	:	" << x << endl;
	cout << "Y	:	" << y << endl;


	string s1 = "Kharghar";
	string s2 = "Juhu";

	swap_object( s1, s2 );

	cout << "S1	:	" << s1 << endl;
	cout << "S2	:	" << s2 << endl;

	return 0;
}
