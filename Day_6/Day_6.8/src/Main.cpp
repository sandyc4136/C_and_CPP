#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Employee{
private:
	char name[30];
	int empid;
	float salary;
public:
	Employee(void){
		strcpy(this->name, " ");
		this->empid=0;
		this->salary=0;
	}
	void printRecord(void){
		cout<< "Name : " <<this->name<<endl;
		cout<< "Empid : " <<this->empid<<endl;
		cout<< "Salary : " <<fixed<<setprecision(3)<<this->salary<<endl;
	}
};
int main(void){
	Employee emp1;
	emp1.printRecord();
	return 0;
}



