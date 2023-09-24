#include<iostream>
using namespace std;

class A{
private:
	int number;
public:
	A( void ){
		this->number = 10;
	}
	friend class B;
};
class B : public A{
public:
	B( void ){

	}
	void printRecord( void ){
		cout <<"Number	:	"<<this->number<<endl;	//OK
	}
};
class C : public A{
public:
	C( void ){

	}
	void printRecord( void ){
		//cout <<"Number	:	"<<this->number<<endl;	//Not OK
	}
};
int main( void ){
	B b;
	b.printRecord( );

	C c;
	c.printRecord( );
	return 0;
}

