#include<iostream>
using namespace std;

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

// due to compiler optimization , an empty object gets atleast
// 1 byte of memory
