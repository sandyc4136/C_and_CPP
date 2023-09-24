#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
	int num1;
public:
	Base( void ){
		this->num1 = 10;
	}
	virtual void print( void ){
		cout << "Num1	:	" << this->num1 << endl;
	}
};
class Derived : public Base{
	int num2;
public:
	Derived( void ){
		this->num2 = 20;
	}
	void print( void ){
		Base::print( );
		cout << "Num2	:	" << this->num2 << endl;
	}
};
int main( void ){
	try{
		Base *ptrBase = NULL;	//Upcasting
		cout << typeid( ptrBase ).name( ) << endl;	//P4Base
		cout << typeid( *ptrBase ).name( ) << endl;	//7Derived
	}catch( bad_typeid &ex ){
		cout << ex.what() << endl;
	}
	return 0;
}
int main6( void ){
	Base *ptrBase = new Derived( );	//Upcasting
	cout << typeid( ptrBase ).name( ) << endl;	//P4Base
	cout << typeid( *ptrBase ).name( ) << endl;	//7Derived
	return 0;
}
int main5( void ){
	Base *ptrBase = new Derived( );	//Upcasting
	cout << typeid( ptrBase ).name( ) << endl;	//P4Base
	cout << typeid( *ptrBase ).name( ) << endl;	//4Base //If Base class is not polymorphic
	return 0;
}
int main4( void ){
	Derived *ptrDerived = new Derived( );
	cout << typeid( ptrDerived ).name( ) << endl;	//P7Derived
	cout << typeid( *ptrDerived ).name( ) << endl;	//7Derived
	return 0;
}
int main3( void ){
	Derived derived;
	cout << typeid( derived ).name( ) << endl;	//7Derived
	return 0;
}

int main2( void ){
	Base *ptrBase = new Base( );
	cout << typeid( ptrBase ).name( ) << endl;	//P4Base
	cout << typeid( *ptrBase ).name( ) << endl;	//4Base
	return 0;
}
int main1( void ){
	Base base;
	cout << typeid( base ).name( ) << endl;	//4Base
	return 0;
}
