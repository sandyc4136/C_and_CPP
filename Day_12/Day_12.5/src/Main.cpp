#include<iostream>
using namespace std;

class A{
public:
	int num1;
public:
	A( void ){
		this->num1 = 10;
	}
	void print( void ){
		cout <<"Num1	:	"<< this->num1 << endl;
	}
	friend void print( void );
};
class B : protected A{
public:
	void print( void ){
		cout <<"Num1	:	"<< this->num1 << endl;
	}
};
class C  : protected B{
public:
	void print( void ){
		cout <<"Num1	:	"<< this->num1 << endl;
	}
};
void print( void ){
	A obj;
	cout <<"Num1	:	"<< obj.num1 << endl;
}
int main( void ){
	C a;
	//a.print( );

	::print( );

	A obj;
	cout <<"Num1	:	"<< obj.num1 << endl;
	return 0;
}

