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
		cout<<" Complex ( int value ) : " <<endl;
	    this->real = real;
	    this->imag = imag;
	  }
	void printRecord(void){
		cout<< "Real Number : "<<this->real<<endl;
		cout<< "Imag Number : "<<this->imag<<endl;
	}
};

int main(void){
	Complex arr[3];
	for(int i=0;i<3;i++){
		arr[i].printRecord();
	}
	return 0;

}


