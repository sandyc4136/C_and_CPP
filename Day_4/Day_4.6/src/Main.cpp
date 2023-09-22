
#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
	char name[32];
	int empid;
	float salary;
public:
	void accept_record(){
		cout << "Name : ";
		cin >> name;
		cout << "Empid : ";
		cin >> empid;
		cout << "Salary : ";
		cin >> salary;
	}
	void print_record(){
		cout << "Name : "<<name<<endl;
		cout << "Empid : "<<empid<<endl;
		cout << "salary : "<<salary<<endl;
	}
};
int main( void ){
  Employee emp1;
  Employee emp2;
  Employee emp3;
  cout<<sizeof(emp1)<< "   "<< "address of emp1 : "<<&emp1<<endl;
  cout<<sizeof(emp2)<< "   "<< "address of emp2 : "<<&emp2<<endl;
  cout<<sizeof(emp3)<< "   "<< "address of emp3 : "<<&emp3<<endl;
return 0;
}
