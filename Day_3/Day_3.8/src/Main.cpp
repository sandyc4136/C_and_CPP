#include<cstdio>

//Example 1:

//namespace na{
//  int num1 = 10;
//}
//int main( void ){
//  using namespace na;
//  printf("Num1  :   %d\n", num1 );
//  return 0;
//}

//Example 2:

//namespace na{
//  int num1 = 10;
//}
//int main( void ){
//  int num1 = 20;
//  using namespace na;
//  printf("Num1  :   %d\n", num1 );  //20
//  printf("Num1  :   %d\n", na::num1 );  //10
//  return 0;
//}

//Example 3:

//namespace na{
//  int num1 = 10;
//}
//namespace nb{
//  int num1 = 20;
//}
//int main( void ){
//  using namespace na;
//  printf("Num1  :   %d\n", num1 );  //10
//  using namespace nb;
//  //printf("Num1    :   %d\n", num1 );  //error: reference to 'num1'
////is ambiguous
//  printf("Num1  :   %d\n", nb::num1 );  //10
//return 0;
//}

//Example 4:

//namespace na{
//  int num1 = 10;
//}
//void show_record( ){
//  printf("Num1  :   %d\n", na::num1);
//}
//void print_record( ){
//  printf("Num1  :   %d\n", na::num1);
//}
//void display_record( ){
//  printf("Num1  :   %d\n", na::num1);
//}
//int main( void ){
//  ::show_record( );
//  ::print_record( );
//  ::display_record( );
//return 0;
//}

//Example 5:

//namespace na{
//  int num1 = 10;
//}
//void show_record( ){
//  using namespace na;
//  printf("Num1  :   %d\n", num1);
//}
//void print_record( ){
//  using namespace na;
//  printf("Num1  :   %d\n", num1);
//}
//void display_record( ){
//  using namespace na;
//  printf("Num1  :   %d\n", num1);
//}
//int main( void ){
//  ::show_record( );
//  ::print_record( );
//  ::display_record( );
//return 0;
//}

//Example 6:

//namespace na{
//  int num1 = 10;
//}
//using namespace na;
//void show_record( ){
//  printf("Num1  :   %d\n", num1);
//}
//void print_record( ){
//  printf("Num1  :   %d\n", num1);
//}
//void display_record( ){
//  printf("Num1  :   %d\n", num1);
//}
//int main( void ){
//  ::show_record( );
//  ::print_record( );
//  ::display_record( );
//return 0;
//}

//Example 7:

// Except main function we can declare any funcn inside namespace

//namespace na{
//int num1 = 10;
//}
//using namespace na;
//namespace nb{
//  void show_record( ){
//    printf("Num1    : %d\n", num1);
//  }
//  void print_record( ){
//
//    printf("Num1    : %d\n", num1);
//  }
//
//  void display_record( ){
//      printf("Num1    :   %d\n", num1);
//    }
//  }
//  int main( void ){
//    nb::show_record( );
//    nb::print_record( );
//    nb::display_record( );
//    return 0;
//  }

//Example 8:

namespace na{
  int num1 = 10;
}
int main( void ){
  printf("Num1  :   %d\n", na::num1);
  namespace nb = na;    //Alias
  printf("Num1  :   %d\n", nb::num1);
  return 0;
}

//Example :
