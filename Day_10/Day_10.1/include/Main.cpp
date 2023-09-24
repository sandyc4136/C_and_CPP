#include<iostream>
using namespace std;

class Test{
private:
	int num1;			//Non static data member / Instance variable
	int num2;			//Non static data member / Instance variable
	static int num3;	//Static data member / Class level variable
public:
	Test( void ){
		this->num1 = 0;
		this->num2 = 0;
	}
	//Instance method
	void setNum1( int num1 ){
		this->num1 = num1;
	}
	//Instance method
	void setNum2( int num2 ){
		this->num2 = num2;
	}
	//Class level method
	static void setNum3( int num3 ){
		Test::num3 = num3;
	}
	static void f1( void ){
		Test t1;
		t1.setNum1( 10 );
		t1.setNum2( 20 );
		Test::setNum3( 30 );

		t1.printRecord( );
	}
	//Test *const this
	void printRecord( void ){
		cout << "Num1	:	" << this->num1 << endl;
		cout << "Num2	:	" << this->num2 << endl;
		cout << "Num3	:	" << Test::num3 << endl;
	}
};
int Test::num3 = 0;	//Global definition
int main( void ){
	Test::f1( );
	return 0;
}
int main3( void ){
	Test t1;

	//Test::setNum1( 10 );	//error: call to non-static member function without an object argument
	t1.setNum1( 10 );	//OK

	//Test::setNum2( 20 );	//error: call to non-static member function without an object argument
	t1.setNum2(20);//OK

	Test::setNum3( 30);	//OK
	//t1.setNum3( 40 );	//OK: Not Recommended

	t1.printRecord( );
	return 0;
}
int main2( void ){
	Test t1;
	t1.setNum1( 10 );
	t1.setNum2( 20 );
	Test::setNum3( 30 );

	t1.printRecord( );
	return 0;
}
int main1( void ){
	Test t1;
	//t1.num1 = 10;	//error: 'num1' is a private member of 'Test'
	//t1.num2 = 20;	//error: 'num2' is a private member of 'Test'
    //Test::num3 = 30;//error: 'num3' is a private member of 'Test'
	t1.printRecord( );
	return 0;
}
