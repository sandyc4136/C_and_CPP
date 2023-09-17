#include<cstdio>
int main( void ){
  const int num1 = 10;  //OK
  const int *const ptrNumber = &num1;
  //num1 = 50;  //Not OK
  //*ptrNumber = 50;    //Not OK:Dereferencing
  printf("Num1  :   %d\n", num1);   //10
  printf("Num1  :   %d\n", *ptrNumber); //10: Dereferencing
  const int num2 = 20;  //OK
  //ptrNumber = &num2;  //Not OK
  return 0;
}
