#include<iostream>
using namespace std;
class Test{
private:
  int number;
public:
  //Test *const this
  Test( void ) : number( 10 ){
    this->number = this->number + 10; //OK
}
  //Test *const this
  void showRecord( void ){
  this->number = this->number + 2;  //OK
  cout << "Number   :   " << this->number << endl;
}
//const Test *const this
void printRecord( void )const{
  Test t;
  t.number = 20;    //OK
  t.showRecord( );  //It will print 22
}
};
int main( void ){
Test t;
t.printRecord( );
return 0;
}
