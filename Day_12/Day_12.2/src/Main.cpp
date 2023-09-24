#pragma pack(1)
#include<iostream>
#include<string>
using namespace std;

class Person{
private:
	string name;	//24 bytes
	int age;	//4 bytes
public:
	Person( void ){
		this->name = "";
		this->age = 0;
	}
	Person( string name, int age ){
		this->name = name;
		this->age = age;
	}
	void showRecord( void ){
		cout << "Name	:	" << this->name << endl;
		cout << "Age	:	" << this->age << endl;
	}
};

int main( void ){
	Person p;
	cout << sizeof( p ) << endl;
	return 0;
}
int main2( void ){
	//Person p;
	Person p("Sandeep", 40);
	p.showRecord( );
	return 0;
}
class Employee{
private:
	string name;	//24 bytes
	int age;	//4 bytes
	int empid;	//4 bytes
	float salary;	//4 bytes
public:
	Employee( void ){
		this->name = "";
		this->age = 0;
		this->empid = 0;
		this->salary = 0;
	}
	Employee( string name, int age, int empid, float salary ){
		this->name = name;
		this->age = age;
		this->empid = empid;
		this->salary = salary;
	}
	void displayRecord( void ){
		cout << "Name	:	" << this->name << endl;
		cout << "Age	:	" << this->age << endl;
		cout << "Empid	:	" << this->empid << endl;
		cout << "Salary	:	" << this->salary << endl;
	}
};
int main3( void ){
	Employee emp;
	cout << sizeof( emp ) << endl;	//36 bytes
	return 0;
}
int main4 ( void ){
	//Employee emp;
	Employee emp("Sandeep", 40, 3778, 45000.50f);
	emp.displayRecord( );
	return 0;
}
