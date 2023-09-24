#include<iostream>
using namespace std;
class Test{
private:
  const int number;
public:
  Test( void ) : number( 10 ){// const data member must be initialized using constructor member initializer list
    //this->number = this->number + 10; // not ok
  }
  void showRecord( void ){
    //this->number = this->number + 2; // not ok
  cout << "Number   :   " << this->number << endl;
}
void printRecord( void ){
  //this->number = this->number + 3;    //Not OK
    cout << "Number :   " << this->number << endl;
}
};

int main( void ){
  Test t;
  t.showRecord( );    //10
  t.printRecord( );   //10
  t.printRecord( );   //10
  t.showRecord( );    //10
  return 0;
}
