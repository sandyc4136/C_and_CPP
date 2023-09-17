#include<cstdio>
int main( void ){
  int num1 = 10;
  int *const ptrNumber = &num1;
  //num1 = 50;  //OK
  *ptrNumber = 50;
  printf("Num1  :   %d\n", num1);   //50
  printf("Num1  :   %d\n", *ptrNumber); //50: Dereferencing
  int num2 = 20;
  //ptrNumber = &num2;  //Not OK
  printf("Num2  :   %d\n", num2);
  return 0;
}
