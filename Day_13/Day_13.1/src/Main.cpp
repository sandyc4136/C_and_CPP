#include<iostream>
using namespace std;

class A{
private:
	//v-ptr
	int num1;
	int num2;
public:
	A( void ){
		this->num1 = 10;
		this->num2 = 20;
	}
	virtual void f1( ){
		cout << "A::f1" << endl;
	}
	virtual void f2( ){
		cout << "A::f2" << endl;
	}
	virtual void f3( ){
		cout << "A::f3" << endl;
	}
	void f4( ){
		cout << "A::f4" << endl;
	}
	void f5( ){
		cout << "A::f5" << endl;
	}
};
class B : public A{
private:
	int num3;
public:
	B( void ){
		this->num3 = 30;
	}
	virtual void f1( ){
		cout << "B::f1" << endl;
	}
	void f2( ){
		cout << "B::f2" << endl;
	}
	void f4( ){
		cout << "B::f4" << endl;
	}
	virtual void f5( ){
		cout << "B::f5" << endl;
	}
	virtual void f6( ){
		cout << "B::f6" << endl;
	}
};
int main( void ){
	A *ptr = new B( );
	ptr->f1( );
	ptr->f4( );
	ptr->f6( );
	return 0;
}
int main7( void ){
	 B b;	//OK
	 //b.f1( );	//OK: B::f1=>Early Binding
	 //b.f2( );	//OK: B::f2=>Early Binding
	 //b.f3( );	//OK: A::f3=>Early Binding
	 //b.f4( );	//OK: B::f4=>Early Binding
	 //b.f5( );	//OK: B::f5=>Early Binding
	 b.f6( );	//OK: B::f6=>Early Binding
	 return 0;
}

int main6( void ){
	 //B *ptr = new A( );	//NOT OK
	 return 0;
}
int main4( void ){
	 B *ptr = new B( );	//OK: Upcasting
	 //ptr->f1( );	//OK: B::f1=>Late Binding
	 //ptr->f2( );	//OK: B::f2=>Late Binding
	 //ptr->f3( );	//OK: A::f3=>Late Binding
	 //ptr->f4( );	//OK: B::f4=>Early Binding
	 //ptr->f5( );	//OK: B::f5=>Late Binding
	 //ptr->f6( );	//OK: B::f6=>Late Binding
	 delete ptr;
	 return 0;
}
int main3( void ){
	 A *ptr = new B( );	//OK: Upcasting
	 //ptr->f1( );	//OK: B::f1=>Late Binding
	 //ptr->f2( );	//OK: B::f2=>Late Binding
	 //ptr->f3( );	//OK: A::f3=>Late Binding
	 //ptr->f4( );	//OK: A::f4=>Early Binding
	 //ptr->f5( );	//OK: A::f5=>Early Binding
	 //ptr->f6( );	//NOT OK: f6 is not a member of class A
	 delete ptr;
	 return 0;
}
int main2( void ){
	 A *ptr = new A( );	//OK
	 //ptr->f1( );	//OK: A::f1=>Late Binding
	 //ptr->f2( );	//OK: A::f2=>Late Binding
	 //ptr->f3( );	//OK: A::f3=>Late Binding
	 //ptr->f4( );	//OK: A::f4=>Early Binding
	 //ptr->f5( );	//OK: A::f5=>Early Binding
	 //ptr->f6( );	//NOT OK: f6 is not a member of class A
	 delete ptr;
	 return 0;
}

int main1( void ){
	 A a;	//OK
	 //a.f1( );	//OK: A::f1=>Early Binding
	 //a.f2( );	//OK: A::f2=>Early Binding
	 //a.f3( );	//OK: A::f3=>Early Binding
	 //a.f4( );	//OK: A::f4=>Early Binding
	 //a.f5( );	//OK: A::f5=>Early Binding
	 //a.f6( );	//NOT OK: f6 is not a member of class A
	 return 0;
}
