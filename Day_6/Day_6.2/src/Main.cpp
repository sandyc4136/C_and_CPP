#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex(void){
		cout<<" Complex ( void ) : " <<endl;
		this->real=0;
		this->imag=0;
	}
	Complex( int value ){
		cout<<" Complex ( int value ) : " <<endl;
	    this->real = value;
	    this->imag = value;
	  }
	  Complex( int real, int imag ){
		  cout<<" Complex ( int real, int imag ) : " <<endl;
	    this->real = real;
	    this->imag = imag;
	  }
	  void printRecord( void ){
	    cout << "Real Number  : " << this->real << endl;
	    cout << "Imag Number  : " << this->imag << endl;
	  }
};

int main(void){
Complex c1; // parameterless constructor
Complex c2(10); //single param constructor
Complex c3(10,20);// 2 param constructor
Complex c4(); // Treated as function
Complex c5=30; // same as Complex c5(30);
Complex(40,50); // anonymous object, 2 param constructor
//Complex c6=60,70; // Compile error
//Complex c7{ 80, 90 }; // Compile error as class Complex not aggregate type
Complex c8=(70,80); // here it will consider the param as the last value after "," operator
// hence Complex c8(70,80) is same as Complex c8(80);
	return 0;
}


