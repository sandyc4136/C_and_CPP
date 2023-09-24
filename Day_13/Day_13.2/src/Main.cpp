#include<iostream>
using namespace std;

class A{
private:
	int *ptr;
public:
	A( void ){
		cout << "A( void )" <<endl;
		this->ptr = new int[ 3 ];
	}
	virtual ~A( void ){
		cout << "~A( void )" <<endl;
		delete[] this->ptr;
	}
};
class B:  public A{
private:
	int *ptr;
public:
	B( void ){
		cout << "B( void )" <<endl;
		this->ptr = new int[ 5 ];
	}
	~B( void ){
		cout << "~B( void )" <<endl;
		delete[] this->ptr;
	}
};
int main( void ){
	A *ptr = new B( );	//Upcasting
	cout<<"------------"<<endl;
	delete ptr;
	return 0;
}
