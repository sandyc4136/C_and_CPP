#include<iostream>
using namespace std;

// Function Overloading

//Rule 1:

void sum( int num1, int num2 ){
  int result = num1 + num2;
  cout<<"Result   :   "<<result<<endl;
}
void sum( int num1, int num2, int num3 ){
  int result = num1 + num2 + num3;
  cout<<"Result   :   "<<result<<endl;
}
int main( void ){
  sum( 10, 20 );
  sum( 10, 20, 30 );
  return 0;
}

// Rule 2:

//void sum( int num1, int num2 ){
//  int result = num1 + num2;
//  cout<<"Result :   "<<result<<endl;
//}
//void sum( int num1, double num2 ){
//  double result = num1 + num2 ;
//  cout<<"Result : "<<result<<endl;
//}
//int main( void ){
//  sum( 10, 20 );
//  sum( 10, 20.5 );
//  return 0;
//}

// Rule 3:

//void sum( int num1, float num2 ){
//  float result = num1 + num2;
//  cout<<"Result :   "<<result<<endl;
//}
//void sum( float num1, int num2 ){
//  float result = num1 + num2 ;
//  cout<<"Result : "<<result<<endl;
//}
//int main( void ){
//  sum( 10, 20.2f );
//  sum( 10.1f, 20 );
//  return 0;
//}

// Rule 4:

//int sum( int num1, int num2 ){
//  int result = num1 + num2;
//  return result;
//}
//void sum( int num1, int num2 ){
//	//Error: Function definition is not allowed
//  int result = num1 + num2;
//}
//int main( void ){
//  return 0;
//}
