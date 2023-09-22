#include<iostream>

using namespace std;
// Mangled name


void sum( int num1, int num2 ){   //__Z3sumii
  int result = num1 + num2;
}
void sum( int num1, int num2, int num3 ){ //__Z3sumiii
  int result = num1 + num2 + num3;
}
void sum( int num1, float num2){  //__Z3sumif
  float result = num1 + num2;
}
void sum( int num1, float num2, double num3 ){
  double result = num1 + num2 + num3;
}
int main( void ){
  return 0;
}
