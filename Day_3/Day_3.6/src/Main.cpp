#include<cstdio>

namespace na{
  int num1 = 10;
}
namespace nb{
  int num1 = 20;
}
int main( void ){
  printf("Num1  :   %d\n", na::num1);   //OK: 10
  printf("Num1  :   %d\n", nb::num1);   //OK: 20
return 0;
}




