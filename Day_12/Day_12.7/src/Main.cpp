#include<iostream>
using namespace std;

class A{
private:
	int number;
public:
	A( void ){
		this->number = 10;
	}
	int getNumber( void ){
		return this->number;
	}
	void setNumber( int number ){
		this->number = number;
	}
};
class B : public A{
public:
	void printRecord( void ){
		cout <<"Number	:	"<<this->getNumber()<<endl;	//OK
	}
};

int main( void ){
	B b;
	b.printRecord( );

	return 0;
}

