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
//	Employee(void): empid(1),salary(100.23f){
//		strcpy(this->name, " ");
//	}

	Employee(const char *name="  ", int empid=0, float salary=0.0f): empid(empid), salary(salary){
		strcpy(this->name,name);
	}

	void printRecord(void){
		cout<< "Name : " <<this->name<<endl;
		cout<< "Empid : " <<this->empid<<endl;
		cout<< "Salary : " <<fixed<<setprecision(2)<<this->salary<<endl;
	}
};
int main(void){
	Employee emp1;
	emp1.printRecord();
	Employee emp2("Sandip", 343, 94943.456f);
	emp2.printRecord();
	return 0;
}



