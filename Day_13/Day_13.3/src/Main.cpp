#include<iostream>
#include<typeinfo>
#include<string>
using namespace std;

int main( void ){
	float number;
	cout <<"Type Name	:	" << typeid( number ).name( ) << endl;
	return 0;
}
int main3( void ){
	float number;
	const type_info &type = typeid( number ) ;
	cout <<"Type Name	:	" << type.name( ) << endl;
	return 0;
}
int main2( void ){
	float number;
	const type_info &type = typeid( number ) ;
	string typeName = type.name( );
	cout <<"Type Name	:	" << typeName << endl;
	return 0;
}
int main1( void ){
	int number;
	size_t size = sizeof( number );
	cout << "Size	:	" << size << endl;
	return 0;
}
