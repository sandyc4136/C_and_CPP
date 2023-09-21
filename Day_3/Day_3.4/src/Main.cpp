#include<cstdio>


int num4 = 10; //File Scope // Program scope : accessible from any fgile
static int num3 = 20; //File Scope
int sum( int num1, int num2 ){  //Function Prototype Scope
  return num1 + num2;
}
int main( void ){
  int count;  //Function Scope
  for(  count = 1; count <= 10; count ++ ){
    int temp = 0; //Block Scope
//TODO
}
return 0; }
