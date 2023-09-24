#include<iostream>
#include<string>
using namespace std;

class Date{
private:
	int day;
	int month;
	int year;
public:
	Date( void ) : day ( 0 ), month( 0 ), year( 0 ) {

	}
	Date( int day, int month, int year ) : day( day ), month( month ), year( year ){
	}
	//TODO: constructors / getter & setters
	friend istream& operator>>( istream &cin, Date &other ){
		cout << "Day	:	";
		cin >> other.day;
		cout << "Month	:	";
		cin >> other.month;
		cout << "Year	:	";
		cin >> other.year;
		return cin;
	}
	friend ostream& operator<<( ostream &cout, const Date &other ){
		cout << other.day <<" / " << other.month <<" / " << other.year << endl;
		return cout;
	}
};

class Employee{
private:
	string name;
	int empid;
	float salary;
	Date joinDate;	//Association
public:
	//TODO: constructors / getter & setters
	friend istream& operator>>( istream &cin, Employee &other ){
		cout << "Name	:	";
		cin >> other.name;
		cout << "Empid	:	";
		cin >> other.empid;
		cout << "Salary	:	";
		cin >> other.salary;
		cout << "Join Date	:	"<<endl;
		cin >> other.joinDate;
		return cin;
	}
	friend ostream& operator<<( ostream &cout, const Employee &other ){
		cout << "Name	:	" << other.name << endl;
		cout << "Empid	:	" << other.empid << endl;
		cout << "Salary	:	" << other.salary << endl;
		cout << "JoinDate	:	" << other.joinDate << endl;
		return cout;
	}
};
int main( void ){
	Date dt( 10, 1, 2023 );
	Employee emp;
	cin >> emp;
	cout << emp;
	return 0;
}
