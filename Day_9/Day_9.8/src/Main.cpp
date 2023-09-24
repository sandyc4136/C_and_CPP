#include<iostream>
using namespace std;

class A{
private:
	int num2;
public:
	A( void );
	void showRecord( );
	friend class B;
};
class B{
private:
	int num1;
public:
	B( void );
	void displayRecord( );
	friend class A;
};
A::A( void ){
	this->num2 = 200;
}
B::B( void ){
	this->num1 = 100;
}
void A::showRecord( void ){
	B obj;
	cout << "Num1	:	" << obj.num1 <<endl;
}
void B::displayRecord( ){
	A obj;
	cout << "Num2	:	" << obj.num2 <<endl;
}
int main( void ){
	A a;
	a.showRecord( );

	B b;
	b.displayRecord( );
	return 0;
}

