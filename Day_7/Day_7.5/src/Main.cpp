#include<iostream>
using namespace std;

void print( int number ){
	cout<<"int	:	"<<number<<endl;
}
void print( int &number ){
	cout<<"int&	:	"<<number<<endl;
}
int main( void ){
	print( 10 );	//int	:	10

	int value = 10;
	//print( value );	//error: call to 'print' is ambiguous
	return 0;
}
