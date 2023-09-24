#include<iostream>
using namespace std;

class Test{
private:
	int num1;
	int num2;
	int num3;
public:


	Test(void);

	Test(int num1, int num2, int num3);

	void printRecord(void);
};

//if we want to separate declaration and definition then constructor member initializer list
// must appear in definition part

// when accessing member function outside class ---- use scope resoltuion Operator
Test::Test(void) : num3(num2), num2(num1), num1(10){

	}

	Test::Test(int num1, int num2, int num3): num1(num1), num2(num2),num3(num3){

	}

	void Test :: printRecord(void){
		cout<<"Num1 : "<<this->num1<<endl;
		cout<<"Num2 : "<<this->num2<<endl;
		cout<<"Num3 : "<<this->num3<<endl;
	}
int main(void){
	Test t1;
	t1.printRecord();
	Test t2(50,60,70);
	t2.printRecord();
	return 0;
}


