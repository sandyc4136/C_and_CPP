#include<iostream>

class test{

};
using namespace std;
int main(void){
	test t;
	cout<<sizeof(t);
	return 0;
}


// due to compiler optimization , an empty object gets atleast
// 1 byte of memory
