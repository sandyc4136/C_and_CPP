#include<iostream>
using namespace std;

class A{
private:
 int num1;
 int num2;
public:
 A( void ){
  this->num1 = 10;
  this->num2 = 20;
 }
 virtual void f1( ){
  cout << "A::f1" << endl;
 }
 virtual void f2( ){
  cout << "A::f2" << endl;
 }
 virtual void f3( ){
  cout << "A::f3" << endl;
 }
 void f4( ){
  cout << "A::f4" << endl;
 }
 void f5( ){
  cout << "A::f5" << endl;
 }
};
class B : public A{
private:
 int num3;
public:
 B( void ){
  this->num3 = 30;
 }
 virtual void f1( ){
  cout << "B::f1" << endl;
 }
 void f2( ){
  cout << "B::f2" << endl;
 }
 void f4( ){
  cout << "B::f4" << endl;
 }
 virtual void f5( ){
  cout << "B::f5" << endl;
 }
 virtual void f6( ){
  cout << "B::f6" << endl;
 }
};




