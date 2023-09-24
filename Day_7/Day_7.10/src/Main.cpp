#include<iostream>
using namespace std;

#include"../include/ArithmeticException"
using namespace exception;

#include"../include/Calculator"
using namespace util;

void accept_record( int &number ){
  cout << "Number	:	";
  cin >> number;
}

void print_record( int &result ){
  cout << "Result	:	" << result << endl;
}

int main( void ){
	try{
		int num1;
		accept_record( num1 );

		int num2;
		accept_record( num2 );

		int result = calculate( num1, num2 );
		print_record( result );
	}catch( ArithmeticException &ex ){
		cout << ex.getMessage( ) << endl;
	}
  return 0;
}
