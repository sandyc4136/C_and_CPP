#include<iostream>
#include<string>
using namespace std;

class Person{
private:
	string name;	//24 bytes
	int age;	//4 bytes
public:
	Person( void ){
		cout << "Person( void )" << endl;
		this->name = "";
		this->age = 0;
	}
	Person( string name, int age ){
		cout << "Person( string name, int age )" << endl;
		this->name = name;
		this->age = age;
	}
	void showRecord( void ){
		cout << "Name	:	" << this->name << endl;
		cout << "Age	:	" << this->age << endl;
	}
	~Person( void ){
		cout << "~Person( void )" << endl;
	}
};
class Employee : public Person{
private:
	int empid;	//4 bytes
	float salary;	//4 bytes
public:
	Employee( void ){
		cout << "Employee( void )" << endl;
		this->empid = 0;
		this->salary = 0;
	}
	Employee( int empid, float salary ){
		cout << "Employee( int empid, float salary )" << endl;
		this->empid = empid;
		this->salary = salary;
	}
	Employee( string name, int age, int empid, float salary ) : Person( name, age ){
		cout << "Employee( string name, int age, int empid, float salary )" << endl;
		this->empid = empid;
		this->salary = salary;
	}
	void displayRecord( void ) {
		this->showRecord( );	//Calling base class member function
		cout << "Empid	:	" << this->empid << endl;
		cout << "Salary	:	" << this->salary << endl;
	}
	~Employee( void ){
		cout<< "~Employee( void )" << endl;
	}
};
int main( void ){
	//Employee emp( 3778, 45000.50f );
	Employee emp( "Sandeep", 40, 3778, 45000.50f );
	emp.displayRecord();
	cout<<"------------------"<<endl;
	return 0;
}
int main9( void ){
	Person *ptr = new Person( "Sandeep", 40 );
	ptr->showRecord();
	cout<<"------------------"<<endl;
	delete ptr;
	return 0;
}
int main8( void ){
	Person p( "Sandeep", 40 );
	p.showRecord();
	cout<<"------------------"<<endl;
	return 0;
}
int main7( void ){
	Employee *ptr = new Employee( );
	cout<<"------------------"<<endl;
	delete ptr;
	return 0;
}
int main6( void ){
	Employee emp;
	cout<<"------------------"<<endl;
	return 0;
}
int main5( void ){
	Person *ptr = new Person( );
	cout<<"------------------"<<endl;
	delete ptr;
	return 0;
}
int main4( void ){
	Person p1;
	cout<<"------------------"<<endl;
	return 0;
}
int main3( void ){
	Employee emp;
	emp.displayRecord( );
	return 0;
}
int main2( void ){
	Employee emp;
	emp.showRecord( );
	emp.displayRecord( );
	return 0;
}

int main1( void ){
	Person p;
	cout << sizeof( p ) << endl;

	Employee emp;
	cout << sizeof( emp ) << endl;
	return 0;
}
