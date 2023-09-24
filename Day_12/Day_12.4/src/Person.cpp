#include<iostream>
#include<string>
using namespace std;

#include"../include/Person"

Person::Person( void ){
	this->name = "";
	this->age = 0;
}
Person::Person( string name, int age ){
	this->name = name;
	this->age = age;
}
void Person::printRecord( void ){
	cout << "Name	:	" << this->name << endl;
	cout << "Age	:	" << this->age << endl;
}
