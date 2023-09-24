#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void ){
		cout << "Complex( void )" << endl;
		this->real = 0;
		this->imag = 0;
	}
	//const Complex &other = c1;
	//Complex *const this = &c3
	Complex( const Complex &other ){	//Copy Constructor
		cout << "Complex( const Complex &other )" << endl ;
		this->real = other.real;	//Shallow Copy
		this->imag = other.imag;	//Shallow Copy
	}
	Complex( int real, int imag ){
		cout << "Complex( int real, int imag )" << endl;
		this->real = real;
		this->imag = imag;
	}
	//Complex other = c2
	//Complex *const this = &c1;
	Complex sum( Complex other ){
		Complex result;
		result.real =  this->real + other.real;
		result.imag =  this->imag + other.imag;
		return result;
	}
	void printRecord( void ){
		cout << "Real Number	:	" << this->real << endl;
		cout << "Imag Number	:	" << this->imag << endl;
	}
};
int main( void ){
	try{
		Complex ex;
		throw ex;
	}catch( Complex &e ){

	}
	return 0;
}
int main4( void ){
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	Complex c3 = c1.sum( c2 );
	c3.printRecord( );
	return 0;
}
int main3( void ){
	Complex c1( 10, 20 );	//On C1, Parameterized ctor will call
	Complex c2;			//On c2, parameterless constructor will call
	Complex c3 = c1;	//On c3, copy constructor will call

	//c1.printRecord();
	//c3.printRecord();
	return 0;
}
int main2( void ){
	Complex c1( 10, 20 );
	Complex c2 = c1;

	c1.printRecord( );
	c2.printRecord( );
	return 0;
}
int main1( void ){
	int num1 = 10;
	int num2 = num1;	//Shallow Copy
	cout << num1 <<endl;
	cout << num2 <<endl;
	return 0;
}
