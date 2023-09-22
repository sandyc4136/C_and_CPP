
#include<iostream>
#include<iomanip>
int main( void ){
    using namespace std;
    int num1,num2;
    cout << "Num1   :   ";
    cin >> num1;
    clog << "Numerator is accepted" <<endl;
//    int num2;
    cout << "Num2   :   "<<endl;
    cin >> num2;
    clog << "Denominator is accepted" <<endl;
    if( num2 == 0 ){
        cerr << "Value of denominator is 0" <<endl;
        clog << "Can not calculate Result because value of denominator is 0." <<endl;
    }
    else{
        int result = num1 / num2;
        clog << "Result is calculated" <<endl;
        cout<< "Result  :   "<< result << endl;
        clog << "Result is printed" <<endl;
}
return 0; }
