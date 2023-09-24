#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex(void){
		cout<<" Inside Constructor " <<endl;
		this->real=0;
		this->imag=0;
	}
	Complex( int real, int imag ){
		cout<<" Parameterized Constructor " <<endl;
	    this->real = real;
	    this->imag = imag;
	  }
	void printRecord(void){
		cout<< "Real Number : "<<this->real<<endl;
		cout<< "Imag Number : "<<this->imag<<endl;
	}
};

int main(void){
	Complex arr[3]={ Complex(10,20), Complex(30,40),Complex(50,60)};
	for(int i=0;i<3;i++){
		arr[i].printRecord();
	}
	return 0;

}


