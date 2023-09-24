#include<iostream>
#include<new>
using namespace std;

int main( void ){
	int *ptr = new int[ 3 ];
	//int *ptr = (int*)::operator new[]( 3 * sizeof( int ) );

	delete[] ptr;
	//::operator delete[]( ptr );
	return 0;
}
int main6( void ){
	int *ptr = new int;
	//int *ptr = ( int* )::operator new( sizeof( int ) );

	*ptr = 123;
	cout << *ptr <<endl;

	delete ptr;
	//::operator delete( ptr );
	return 0;
}
int main5( void ){
	int **ptr = new int*[ 2 ];
	for( int index = 0; index < 2; ++ index )
		ptr[ index ] = new int[ 3 ];

	//TODO: Accept
	for( int row = 0; row < 2; ++ row ){
		for( int col = 0; col < 3; ++ col ){
			cout << "Enter element	:	";
			cin >> ptr[ row ][ col ];
		}
	}
	//TODO: Print
	for( int row = 0; row < 2; ++ row ){
		for( int col = 0; col < 3; ++ col ){
			cout << ptr[ row ][ col ]<<"	";
		}
		cout <<endl;
	}

	for( int index = 0; index < 2; ++ index )
		delete[ ] ptr[ index ];
	delete[] ptr;
	ptr = nullptr;
	return 0;
}
int main4( void ){
	int *ptr1 = new int;		//Single Variable: garbage value

	int *ptr2 = new int( );		//Single Variable: 0

	int *ptr3 = new int( 3 );	//Single Variable: 3

	int *ptr4 = new int[ 3 ];	//Array: garbage value
	return 0;
}
int main3( void ){
	//int arr[ 3 ];	//Static memory allocation for array

	//Memory allocation for array
	int *ptr =new int[ 3 ];	//Dynamic memory allocation
	ptr[ 0 ] = 10;
	ptr[ 1 ] = 20;
	ptr[ 2 ] = 30;
	for( int index = 0; index < 3; ++ index )
		cout << ptr[ index ] << endl;

	//Memory deallocation for array
	delete[ ] ptr;	//Dynamic memory deallocation
	ptr = nullptr;
	return 0;
}
int main2( void ){
	//Memory allocation for single integer variable
	//int *ptr = new int;	//Dyanamic memory allocation: Garbage Value
	//int *ptr = new int( );	//Dyanamic memory allocation: 0
	int *ptr = new int( 123 );	//Dyanamic memory allocation: 123

	cout << "Value	:	" << *ptr << endl;	//Dereferencing

	//Memory deallocation for single integer variable
	delete ptr;	//Dynamic memory deallocation
	ptr  = nullptr;
	return 0;
}


int main1( void ){
	//Memory allocation for single integer variable
	int *ptr = new int;	//Dyanamic memory allocation

	*ptr = 10;	//Dereferencing
	cout << "Value	:	" << *ptr << endl;	//Dereferencing

	//Memory deallocation for single integer variable
	delete ptr;	//Dynamic memory deallocation
	ptr  = nullptr;
	return 0;
}
