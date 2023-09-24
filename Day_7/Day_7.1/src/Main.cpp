#include<iostream>
using namespace std;

// Example 1:

//int main( void ){
//  int num1 = 10;
//  int &num2 = num1;
//  ++ num1;  //11
//  ++ num2;  //12
//  cout<<"Num1   :"<< num1<<" Address of num1 : "<<&num1 <<endl; //12
//
//  cout<<"Num2   : "<< num2<<"Address of num1 : "<<&num2<<endl; //12
//}

// Example 2:

//int main( void ){
//  int num1 = 10;
//  int &num2 = num1;
//  int &num3 = num1;
//  ++ num1;    //11
//  ++ num2;    //12
//  ++ num3;    //13
//cout<<"Num1 :   "<< num1<<endl; //13
//cout<<"Num2 :   "<< num2<<endl; //13
// cout<<"Num3 :   "<< num3<<endl; //13
// return 0;
//}

// Example 3:
//
//int main( void ){
//    int num1 = 10;
//    int &num2 = num1;       //using num2, we can read/modify value of num1
//    const int &num3 = num1; //using num3, we can read value but can
////not modify value of num1
//    ++ num2;    //OK: 11
//    //++ num3;  //Not OK
//  cout<<"Num1 : "<< num1<<endl;
//  cout<<"Num2 : "<< num2<<endl;
//  cout<<"Num3 : "<< num3<<endl;
//  return 0;
//}
// Example 4:

int main( void ){
  int num1 = 10;
  int num2 = 20;
  int &num3 = num1;
  num3 = num2;
  ++ num3;
  cout<<"Num1 :"<< num1<<endl; //21
  cout<<"Num2 :"<< num2<<endl; //21
  cout<<"Num3 :"<< num3<<endl; //21
  return 0;
}


