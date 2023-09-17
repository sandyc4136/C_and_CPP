#include<cstdio>
int main( void ){
  const int *ptrNumber = NULL;  //OK
  const int num1 = 10;
  ptrNumber = &num1;    //OK
  //num1 = 50;  //Not OK
  //*ptrNumber = 50;    //Not OK
  printf("Num1  :   %d\n", num1);   //10
  printf("Num1  :   %d\n", *ptrNumber); //10: Dereferencing
  const int num2 = 20;
  ptrNumber = &num2;    //OK
  //num2 = 60;  //Not OK
  //*ptrNumber = 60;    //Not OK
  printf("Num2  :   %d\n", num2);   //20
  printf("Num2  :   %d\n", *ptrNumber); //20: Dereferencing
  return 0;
}
