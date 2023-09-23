#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:
	void acceptRecord(void){
		cout<<" Real : ";
		cin>>this->real;
		cout<<" Imag : ";
		cin>>this->imag;
	}
	void printRecord(void){
		cout<<"Result Real : "<<this->real<<endl;
		cout<<"Result  Imag : "<<this->imag<<endl;
	}
	//------------ sum functrion overloading----------

//	Complex sum(Complex other){
//		Complex result;
//		result.real=this->real+other.real;
//		result.imag=this->imag+other.imag;
//		return result;
//	}

	// --------------- OR ----------------
		Complex sum(Complex *ptr){
			Complex result;
			result.real=this->real + ptr->real;
			result.imag=this->imag + ptr->imag;
			return result;
		}
};
int main(void){
	 Complex c1;
	 c1.acceptRecord(); // (10,20)
	 Complex c2;
	 	 c2.acceptRecord(); //(30,40)
//	 	 c1.printRecord();
//	 	 c2.printRecord();
	 	 Complex c3;
	 	// c3=c1.sum(c2);      // (&c1,c2)
	 	c3=c1.sum(&c2);
	 	 c3.printRecord(); //(40,60)
	return 0;
}



