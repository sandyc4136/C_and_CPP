#include<iostream>
using namespace std;

class Test{
private:
	int num1;
	int num2;
	int num3;
public:
	// Constructor member initializer list : num3(num2), num2(num1), num1(10)
	//if we want to initialize according to the order of data member then we should
	// follow constructor member initializer list

	// Test(void) : num1(10), num2(20), num3(30){}

	Test(void) : num3(num2), num2(num1), num1(10){

	}

	Test(int num1, int num2, int num3): num1(num1), num2(num2),num3(num3){

	}
//	Test( void ){
//		this->num3=this->num2;
//		this->num2=this->num1;
//		this->num1=10;
//		}
	void printRecord(void){
		cout<<"Num1 : "<<this->num1<<endl;
		cout<<"Num2 : "<<this->num2<<endl;
		cout<<"Num3 : "<<this->num3<<endl;
	}
};
int main(void){
	Test t1;
	t1.printRecord();
	Test t2(50,60,70);
	t2.printRecord();
	return 0;
}


