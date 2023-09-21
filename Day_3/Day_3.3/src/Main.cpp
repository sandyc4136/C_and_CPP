#include<cstdio>
 void print_message( ){
    printf("Good Evening!!\n");
  }  //OK


int num1 = 10;  //Global Variable
int main( void ){
  int num1 = 20;    //Local variable
  printf("Num1  :   %d\n", ::num1); //10
  printf("Num1  :   %d\n", num1);   //20
print_message();

return 0;
}
