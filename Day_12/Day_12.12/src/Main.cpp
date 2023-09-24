#include<iostream>
using namespace std;

class A{
public:
	int num1;
	int num2;
public:
	A( void ){
		this->num1 = 10;
		this->num2 = 20;
	}
	A( int num1, int num2 ){
		this->num1 = num1;
		this->num2 = num2;
	}
	void showRecord( void ){
		cout << "Num1	:	" << this->num1 << endl;
		cout << "Num2	:	" << this->num2 << endl;
	}
	void printRecord( void ){
		cout << "Num1	:	" << this->num1 << endl;
		cout << "Num2	:	" << this->num2 << endl;
	}
};
class B : public A{
public:
	int num3;
public:
	B( void ){
		this->num3 = 30;
	}
	B( int num1, int num2, int num3 ) : A( num1, num2 ){
		this->num3 = num3;
	}
	void printRecord( void ){
		A::printRecord( );
		cout << "Num3	:	" << this->num3 << endl;
	}
	void displayRecord( void ){
		A::showRecord( );
		cout << "Num3	:	" << this->num3 << endl;
	}
};
int main( void ){
	A *ptrBase = new B( );	//Upcasting
	ptrBase->num1 = 10;	//OK
	ptrBase->num2 = 20;	//OK
	B *ptrDerived = ( B* )ptrBase;
	ptrDerived->num3 = 30;
	ptrDerived->printRecord( );
	delete ptrDerived;
	return 0;
}
int main(3 void ){
	A *ptr = new B( );
	ptr->num1 = 10;	//OK
	ptr->num2 = 20;	//OK
	//ptr->num3 = 30;	//Not OK
	ptr->printRecord( );
	delete ptr;
	return 0;
}
int main2( void ){
	B *ptr = new B( );
	ptr->num1 = 10;	//OK
	ptr->num2 = 20;	//OK
	ptr->num3 = 30;	//OK
	ptr->printRecord( );
	delete ptr;
	return 0;
}
int main1( void ){
	A *ptr = new A( );
	ptr->num1 = 10;	//OK
	ptr->num2 = 20;	//OK
	//ptr->num3 = 30;	//NOT OK
	ptr->printRecord( );
	delete ptr;
	return 0;
}
