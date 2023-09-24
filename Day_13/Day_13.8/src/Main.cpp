#include<iostream>
using namespace std;

class Base{
private:
	int num1;
	int num2;
public:
	Base( void ){
		this->num1 = 0;
		this->num2 = 0;
	}
	void setNum1( int num1 ){
		this->num1 = num1;
	}
	void setNum2( int num2 ){
		this->num2 = num2;
	}
	void print( void ){
		cout << "Num1	:	" << this->num1 << endl;
		cout << "Num2	:	" << this->num2 << endl;
	}
};
class Derived : public Base{
private:
	int num3;
public:
	Derived( void ){
		this->num3 = 0;
	}
	void setNum3( int num3 ){
		this->num3 = num3;
	}
	void print( void ){
		//Base::print( );
		cout << "Num3	:	"<< this->num3 << endl;
	}
};
int main( void ){
	Base *ptrBase = new Derived( );	//OK: Upcasting
	ptrBase->setNum1( 10 );	//OK
	ptrBase->setNum2( 20 );	//OK

	//Derived *ptrDerived = ( Derived* )ptrBase;	//Downcasting: C-Style
	Derived *ptrDerived = static_cast< Derived*>( ptrBase );	//Downcasting: C-Style
	ptrDerived->setNum3( 30 );

	ptrDerived->Base::print( );
	ptrDerived->Derived::print( );
	return 0;
}
