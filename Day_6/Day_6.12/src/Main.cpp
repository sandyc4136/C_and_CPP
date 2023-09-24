#include<iostream>
using namespace std;
class Test{
private:
  int number;
public:
  //Test *const this
  Test( void ) : number( 0 ){
    this->number = this->number + 10; //OK
}
  //Test *const this
  void showRecord( void ){
    this->number = this->number + 2;  //OK
    cout << "Number   :   " << this->number << endl;
}
  //const Test *const this
  void printRecord( void )const{
    //this->number = this->number + 3;    //Not OK
    cout << "Number :   " << this->number << endl;
} };
int main( void ){
  Test t;

  t.showRecord( );    //12
  t.printRecord( );   //12
  t.printRecord( );   //12
  t.showRecord( );    //14
  return 0;
}
