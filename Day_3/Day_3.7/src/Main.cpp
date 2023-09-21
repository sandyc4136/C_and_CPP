#include<cstdio>

// Example 1 :

//namespace na{
//  int num1 = 10;
//  int num2 = 20;
//}
//namespace nb{
//int num1 = 30;
//  int num3 = 40;
//}
//int main( void ){
//  printf("Num1  :   %d\n", na::num1);   //OK: 10
//  printf("Num2  :   %d\n", na::num2);   //OK: 20
//  printf("Num1  :   %d\n", nb::num1);   //OK: 30
//  printf("Num3  :   %d\n", nb::num3);   //OK: 40
//  return 0;
//}

// Example 2:

//namespace na{
//  int num1 = 10;
//  int num2 = 20;
//}
//namespace na{
//  //int num1 = 30;  //error: redefinition of 'num1'
//  int num3 = 30;
//}
//int main( void ){
//  printf("Num1  :   %d\n", na::num1);   //OK: 10
//  printf("Num2  :   %d\n", na::num2);   //OK: 20
//  printf("Num3  :   %d\n", na::num3);   //OK: 30
//  return 0;
//}


// Example 3:

//int main( void ){
//  namespace na{ //error: namespaces can only be defined in global or
////namespace scope
//    int num1 = 10;
//  }
//return 0; }

// Example 4:

int num1 = 10;
//File Scope
namespace na{
  int num2 = 20;
  //Namespace scope
  namespace nb{ //Nested namespace
    int num3 = 30;
  }
}
int main( void ){
  printf("Num1  :   %d\n", ::num1); //10
  printf("Num2  :   %d\n", na::num2);   //20
  printf("Num3  :   %d\n", na::nb::num3);   //30
  return 0;
}

