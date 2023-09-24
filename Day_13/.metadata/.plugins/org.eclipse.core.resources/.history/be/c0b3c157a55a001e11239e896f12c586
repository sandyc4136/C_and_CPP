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
	virtual void print( void ){
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
	Derived *ptrDerived = dynamic_cast< Derived*>( ptrBase );	//Downcasting: C++ -Style
	if( ptrDerived != NULL ){
		ptrDerived->setNum3( 30 );
		ptrDerived->Base::print( );
		ptrDerived->Derived::print( );
		delete ptrBase;
	}
	return 0;
}
int main2( void ){
	Base base;
	Base &ref1 = base;
	//Base *const ref1 = &base;
	ref1.setNum1( 10 );	//OK
	ref1.setNum2( 20 );	//OK
	ref1.print( );


	Derived &ref2 = dynamic_cast< Derived&>( ref1 );	//Downcasting: C-Style
	ref2.setNum3( 30 );
	ref2.Derived::print( );


	//Output: bad_cast
	return 0;
}
int main1( void ){
	Base *ptrBase = new Base( );	//OK
	ptrBase->setNum1( 10 );	//OK
	ptrBase->setNum2( 20 );	//OK
	ptrBase->print( );


	Derived *ptrDerived = dynamic_cast< Derived*>( ptrBase );	//Downcasting: C++ -Style
	if( ptrDerived != NULL ){
		ptrDerived->setNum3( 30 );
		ptrDerived->Derived::print( );
	}else
		cout << "Invalid cast" << endl;

	//Output: Invalid cast
	return 0;
}
