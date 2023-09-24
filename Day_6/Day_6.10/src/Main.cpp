#include<iostream>

using namespace std;

class Test{
private:
	int number;
public:
	Test(void){
		this->number=0;
		this->number=this->number+10;
	}
	void showRecord(void){
		this->number=this->number+2;
		cout<<" Number : "<<this->number<<endl;
	}
	void displayRecord(void){
		cout<<" Number : "<<this->number<<endl;
	}
};

int main(void){
	Test t;
	t.showRecord();
	t.displayRecord();
	return 0;
}
//int main(void){
//	const int num=10;
//	cout<<" Number : "<<num<<endl;
//	return 0;
//}


