#include<iostream>
#include<iomanip>
#include"../include/Arithmatic_Operation.h"
#include"../include/Calculator.h"
using namespace std;

  ArithmaticOperation_t menu_list(void){
	  int choice;
	cout<<"0 : exit"<<endl;
	cout<<"1 : Sum"<<endl;
	cout<<"2 : Sub"<<endl;
	cout<<"3 : Multiply"<<endl;
	cout<<"4 : Divide"<<endl;
	cout<<"Your choice : ";
	cin>>choice;
	return  ArithmaticOperation_t(choice);
}
int main(void){
	enum ArithmaticOperation choice;

	while((choice=menu_list())!=0){
	int result=0;
	switch(choice){
		case SUM:
			result=sum(100,20);
			break;
	    case SUB:
			result=sub(100,20);
			break;
		case MULTIPLY:
			result=multiply(100,20);
			break;
		case DIVIDE:
			result=divide(100,20);
			break;
//		default :
//			cout<<"No action performed"<<endl;
			}
cout<<"Result :   "<<result<<endl;
	}
	return 0;
}
