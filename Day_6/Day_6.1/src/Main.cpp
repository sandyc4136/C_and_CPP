#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	Complex(void){
		cout<<" Complex ( void ) : "<< this <<endl;
		this->real=0;
		this->imag=0;
	}
	void acceptRecord(void){
		cout<<"Enter real number : ";
		cin>>this->real;
		cout<<"Enter imag number : ";
		cin>>this->imag;
	}
	void printRecord(void){
		cout<<"Real number:   "<<this->real<<endl;
		cout<<"Imag number :   "<<this->imag<<endl;
	}
};

int main(void){
	Complex c1, c2, c3;
	cout<<" C1 : "<<&c1<<endl;
	cout<<" C2 : "<<&c2<<endl;
	cout<<" C3 : "<<&c3<<endl;

	return 0;
}


