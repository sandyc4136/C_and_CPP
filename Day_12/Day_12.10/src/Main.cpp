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
		this->showRecord( );
	}
	~A( void ){
		cout<<"~A( void )"<<endl;
	}
protected:
	void showRecord( ){
		cout<<"Num1	:	"<<this->num1<<endl;
	}
};
class B : virtual public A{
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
		A::print( );	//num1
		this->showRecord( );	//num2
	}
	~B( void ){
		cout << "~B( void )" << endl;
	}
protected:
	void showRecord( ){
		cout << "Num2	:	" << this->num2 << endl;
	}
};
class C : virtual public A{
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
		A::print( );	//num1
		this->showRecord( );	//num3
	}
	~C( void ){
		cout << "~C( void )" << endl;
	}
protected:
	void showRecord( ){
		cout << "Num3	:	" << this->num3 << endl;
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
	D( int num1, int num2, int num3, int num4 ) : A( num1 ), B( num2 ), C( num3 ){
		cout << "D( int num4 )" << endl;
		this->num4 = num4;
	}
	void print(  void ){
		A::showRecord( );		//error: ambiguous call
		B::showRecord( );		//num2
		C::showRecord( );		//num3
		this->showRecord( );	//num4
	}
	~D( void ){
		cout << "~D( void )" << endl;
	}
protected:
	void showRecord( ){

		cout << "Num4	:	" << this->num4 << endl;
	}
};
int main( void ){
	D obj( 500,600,700,800);
	obj.print( );
	cout << "---------" << endl;
	return 0;
}
int main3( void ){
	C c1(500,600);
	c1.print( );
	cout << "---------" << endl;
	return 0;
}
int main2( void ){
	B b1(500,600);
	b1.print( );
	cout << "---------" << endl;
	return 0;
}
int main1( void ){
	A a1(500);
	a1.print( );
	return 0;
}
