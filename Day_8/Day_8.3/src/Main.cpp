#include<iostream>
using namespace std;

int main( void ){
	int count = -3;
	int *ptr = new ( nothrow ) int[ count ];
	//int *ptr = ::operator new[]( count * sizeof( int ), nothrow );
	if( ptr == NULL )
		cout << "NULL "<<endl;
	else
		cout << ptr << endl;
	return 0;
}
int main1( void ){
	char name[ 100 ];
	cout << "Enter name	:	";
	cin >> name;
	cout << "Name	:	"<<name<<endl;



	int *ptr = new ( &name[ 50 ] ) int;
	*ptr = 123;
	cout << *ptr <<endl;
	//delete ptr;
	ptr = NULL;

	return 0;
}
