#include<iostream>
using namespace std;
// Default argument --  concept of C++
// Default argument needs to be provided from right to left
// Default argument  can reduce developer effort
//  Default value can be contant , variable , macro

//int sum(int num1, int num2, int num3=0, int num4=0, int num5=0){
//	int total=num1 + num2 + num3 + num4 + num5;
//	cout<<"Total : "<< total<<endl;
//	return 0;
//}

// -------------- OR ------------

//int default_argument=0;
//int sum(int num1, int num2, int num3=default_argument, int num4=default_argument, int num5=default_argument){
//	int total=num1 + num2 + num3 + num4 + num5;
//	cout<<"Total : "<< total<<endl;
//	return 0;
//}
//int main(void){
//	sum(10,20);
//	sum(10,20,30);
//	sum(10,20,30,40);
//	sum(10,20,30,40,50);
//	return 0;
//}

// -------------- OR ------------

 #define DEFAULT_VALUE 0
int sum(int num1, int num2, int num3=DEFAULT_VALUE, int num4=DEFAULT_VALUE, int num5=DEFAULT_VALUE){
	int total=num1 + num2 + num3 + num4 + num5;
	cout<<"Total : "<< total<<endl;
	return 0;
}
int main(int argc=0, char *argv[]=NULL){ // Default argument can be passed to global functioon
	// as well as Member function
	sum(10,20);
	sum(10,20,30);
	sum(10,20,30,40);
	sum(10,20,30,40,50);
	return 0;
}
