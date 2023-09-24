#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex( void ){
		this->real = 10;
		this->imag = 20;
	}
	friend ostream& operator<<( ostream &cout, Complex &other ){
		cout << "Real Number	:	" << other.real << endl;
		cout << "Imag Number	:	" << other.imag << endl;
		return cout;
	}
};
int main( void ){
	Complex c1;
	cout << c1 << endl;
	//int *ptr = (int*)(&c1);	//C-Style
	int *ptr = reinterpret_cast<int*>( &c1 );	//C++ Style
	*ptr = 50;
	ptr = ptr + 1;
	*ptr = 60;
	cout << c1 << endl;
	return 0;
}
