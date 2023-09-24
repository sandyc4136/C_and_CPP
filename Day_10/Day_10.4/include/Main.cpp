#include<iostream>
using namespace std;

class InstanceCounter{
private:
	static int count;
public:
	InstanceCounter( ){
		InstanceCounter::count = InstanceCounter::count + 1;
	}
	static int getCount( void ){
		return InstanceCounter::count;
	}
	~InstanceCounter( ){
		InstanceCounter::count = InstanceCounter::count - 1;
	}
};
int InstanceCounter::count = 0;
int main( void ){
	InstanceCounter c1, c2, c3;
	cout << "Instance Counter	:	" << InstanceCounter::getCount( ) << endl;
	return 0;
}
