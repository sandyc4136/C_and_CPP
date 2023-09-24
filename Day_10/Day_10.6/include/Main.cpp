#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void ){
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag ){
		this->real = real;
		this->imag = imag;
	}
	//Complex other = c2
	//Complex *const this = &c1
	Complex operator+( Complex other ){
		Complex result;
		result.real = this->real + other.real;
		result.imag = this->imag + other.imag;
		return result;
	}
	//Complex other = c2
	//Complex *const this = &c1
	Complex operator-( Complex other ){
		Complex result;
		result.real = this->real - other.real;
		result.imag = this->imag - other.imag;
		return result;
	}
	//Complex other = c2
	//Complex *const this = &c1
	Complex operator*( Complex other ){
		Complex result;
		result.real = this->real * other.real;
		result.imag = this->imag * other.imag;
		return result;
	}
	//Complex other = c2
	//Complex *const this = &c1
	Complex operator/( Complex other ){
		Complex result;
		result.real = this->real / other.real;
		result.imag = this->imag / other.imag;
		return result;
	}
	void printRecord( void ){
		cout << "Real Number	:	" << this->real <<endl;
		cout << "Imag Number	:	" << this->imag <<endl;
	}
};

int main( void ){
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	Complex c3;
	//c3 = c1 + c2;	// c3 = c1.operator+( c2 )
	//c3 = c1 - c2;	// c3 = c1.operator-( c2 )
	//c3 = c1 * c2;	// c3 = c1.operator*( c2 )
	c3 = c1 / c2;	// c3 = c1.operator/( c2 )
	c3.printRecord( );
	return 0;
}
