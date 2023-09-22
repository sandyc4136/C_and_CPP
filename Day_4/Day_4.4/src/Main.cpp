#include<cstdio>
#include<iostream>
#include<iomanip>
int main( void ){
  int num1, num2;
  //In C programming language
  printf("Num1  :   ");
  scanf("%d", &num1 );
  //In C++ programming language
  std::cout << "Num2   :   ";
  std::cin >> num2;

//  std::cout << "Num1    :   " <<num1<<std::endl;
//  std::cout << "Num1    :   "<<num2<<std::endl;

  using namespace std;


cout<<num1 << setw(5) <<num2<<endl;

return 0;
}
