#include<iostream>
#include<string>
using namespace std;

#include"../include/Employee"
Employee::Employee( void ){
	this->empid = 0;
	this->salary = 0;
}
Employee::Employee( string name, int age, int empid, float salary ) : Person( name, age ){
	this->empid = empid;
	this->salary = salary;
}
void Employee::printRecord( void ){
	//this->Person::printRecord( );	//OK
	Person::printRecord( );	//OK
	cout << "Empid	:	" << this->empid << endl;
	cout << "Salary	:	" << this->salary << endl;
}
