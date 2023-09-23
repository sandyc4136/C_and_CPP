#include<iostream>
using namespace std;

class Complex{
private:
	int real;
	int imag;
public:

	void printRecord(){
		cout<<this->real;
		cout<<endl;
		cout<<this->imag;
	}
	void acceptRecord(){
					cin>>this->real;
					cin>>this->imag;
				}
};
int main(void){
	Complex c1;
	c1.acceptRecord();
	c1.printRecord();
	return 0;
}




