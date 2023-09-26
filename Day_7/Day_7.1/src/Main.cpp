#include<iostream>
using namespace std;

class Test{
private:
	char &ch;
public:
	Test( char &ch2 ) : ch( ch2 ){

	}
};
int main( void ){
	char ch1 = 'A';
	Test t( ch1 );
	size_t size = sizeof( t );
	cout << "Size	:	" << size << endl;
	return 0;
}

int main9( void ){
	int num1 = 10;

	int &num2 = num1;
	//int *const num2 = &num1;

	cout << num2 <<endl;
	//cout << *num2 <<endl;
	return 0;
}
int main8( void ){
	int num1 = 10;
	int &num2 = num1;
	int &num3 = num2;

	++ num1;	//11
	++ num2;	//12
	++ num3;	//13

	cout<<"Num1	:	"<< num1<<endl;
	cout<<"Num2	:	"<< num2<<endl;
	cout<<"Num3	:	"<< num3<<endl;
	return 0;
}
int main7( void ){
	int num1 = 10;
	int num2 = 20;
	int &num3 = num1;
	num3 = num2;
	++ num3;


	cout<<"Num1	:	"<< num1<<endl;	//21
	cout<<"Num2	:	"<< num2<<endl;	//20
	cout<<"Num3	:	"<< num3<<endl;	//21
	return 0;
}
int main6( void ){
	int num1 = 10;
	int &num2 = num1;		//using num2, we can read/modify value of num1
	const int &num3 = num1;	//using num3, we can read value but can not modify value of num1

	++ num2;	//OK: 11
	//++ num3;	//Not OK

	cout<<"Num1	:	"<< num1<<endl;
	cout<<"Num2	:	"<< num2<<endl;
	cout<<"Num3	:	"<< num3<<endl;
	return 0;
}
int main5( void ){
	int num1 = 10;
	int &num2 = num1;
	int &num3 = num1;

	++ num1;	//11
	++ num2;	//12
	++ num3;	//13

	cout<<"Num1	:	"<< num1<<endl;	//13
	cout<<"Num2	:	"<< num2<<endl;	//13
	cout<<"Num3	:	"<< num3<<endl;	//13
	return 0;
}

int main4( void ){
	int num1 = 10;
	int &num2 = num1;

	++ num1;	//11
	++ num2;	//12
	cout<<"Num1	:	"<< num1<<endl;	//12
	cout<<"Num2	:	"<< num2<<endl;	//12
	return 0;
}
int main3( void ){
	int num1 = 10;
	int &num2 = num1;

	cout<<"Num1	:	"<< num1<<"	"<<&num1<<endl;
	cout<<"Num2	:	"<< num2<<"	"<<&num2<<endl;
	return 0;
}

int main2( void ){
	int num1 = 10;
	int *num2 = &num1;

	cout<<"Num1	:	"<< num1<<"	"<<&num1<<endl;
	cout<<"Num2	:	"<< num2<<"	"<<&num2<<endl;
	return 0;
}
int main1( void ){
	int num1 = 10;
	int num2 = num1;

	cout<<"Num1	:	"<< num1<<"	"<<&num1<<endl;
	cout<<"Num2	:	"<< num2<<"	"<<&num2<<endl;
	return 0;
}
