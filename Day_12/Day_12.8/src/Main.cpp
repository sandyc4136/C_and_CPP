#include<iostream>
using namespace std;
class A{
private:
	int num1;
public:
	A( void ){
		cout<<"A( void )"<<endl;
		this->num1 = 10;
	}
	A( int num1 ){
		cout<<"A( int num1 )"<<endl;
		this->num1 = num1;
	}
	void print( void ){
		cout<<"Num1	:	"<<this->num1<<endl;
	}
	~A( void ){
		cout<<"~A( void )"<<endl;
	}
};
class B : public A{
private:
	int num2;
public:
	B( void )  {
		cout << "B( void )" <<endl;
		this->num2 = 20;
	}
	B( int num2 ) {
		cout << "B( int num2 )" <<endl;
		this->num2 = num2;
	}
	B( int num1, int num2 ) : A( num1 ){
		cout << "B( int num1, int num2 )" <<endl;
		this->num2 = num2;
	}
	void print( void ){
		A::print( );
		cout << "Num2	:	" << this->num2 << endl;
	}
	~B( void ){
		cout << "~B( void )" << endl;
	}
};
class C : public A{
private:
	int num3;
public:
	C( void ) {
		cout << "C( void )" <<endl;
		this->num3 = 30;
	}
	C( int num3 ){
		cout << "C( int num3 )" <<endl;
		this->num3 = num3;
	}
	C( int num1, int num3 ) : A( num1 ){
		cout << "C( int num1, int num3 )" <<endl;
		this->num3 = num3;
	}
	void print( void ){
		A::print( );
		cout << "Num3	:	" << this->num3 << endl;
	}
	~C( void ){
		cout << "~C( void )" << endl;
	}
};
class D : public B, public C{
private:
	int num4;
public:
	D( void ){
		cout << "D( void )" << endl;
		this->num4 = 40;
	}
	D( int num4 ){
		cout << "D( int num4 )" << endl;
		this->num4 = num4;
	}
	D( int num1, int num2, int num3, int num4 ) : B( num1, num2 ), C( num1, num3 ){
		cout << "D( int num4 )" << endl;
		this->num4 = num4;
	}
	void print(  void ){
		B::print( );
		C::print( );
		cout << "Num4	:	" << this->num4 << endl;
	}
	~D( void ){
		cout << "~D( void )" << endl;
	}
};
int main( void ){
	D obj;
	obj.print( );
	cout << "---------" << endl;
	return 0;
}
int main3( void ){
	C c1( 300, 400 );
	c1.print( );
	cout << "---------" << endl;
	return 0;
}
int main2( void ){
	B b1( 100, 200 );
	cout << sizeof( b1 ) << endl;
	cout << "---------" << endl;
	return 0;
}
int main1( void ){
	A a1;
	a1.print( );
	return 0;
}
