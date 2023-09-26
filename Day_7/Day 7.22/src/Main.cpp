#include<iostream>
#include<string>
using namespace std;

#include"../include/Complex"
using namespace nutil;

void accept_record(Complex &c1){
	int real;
		cout<<"Enter real number : ";
		cin>>real;
		c1.setReal(real);
		int imag;
			cout<<"Enter Imag number : ";
			cin>>imag;
		c1.setImag(imag);
}
void print_record(const Complex &c1) throw(){
	cout<<"Real Number : "<<c1.getReal()<<endl;
	cout<<"Imag Number : "<<c1.getImag()<<endl;
}
int menu_list(){
	int choice;
	cout<<"0 : Exit"<<endl;
	cout<<"1 : Accept Record"<<endl;
	cout<<"2 : Print Record"<<endl;
	cout<<"Enter Choice : "<<endl;
	cin>>choice;
	return choice;
}
int main(void){
//	try{
//		Complex c1;
//			::accept_record(c1);
//			::print_record(c1);
//	}catch(illegalArgumentException &ex){
//		cout<<ex.getMessage()<<endl;
//	}
	int choice;
	Complex c1;
	while((choice=::menu_list())!=0){
		try{
			switch(choice){
					case 1:
						::accept_record(c1);
						break;
					case 2:
						::print_record(c1);
						break;
				}
			}catch(illegalArgumentException &ex){
				cout<<ex.getMessage()<<endl;
		}
	}

	return 0;
}




