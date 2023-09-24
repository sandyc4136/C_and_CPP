#include<iostream>
using namespace std;

int main( void ){
	int arr1[ 3 ] = { 10, 20, 30 };
	int (&arr2)[ 3 ] = arr1;	//arr2 is reference and arr1 is referent
	for( int index = 0; index < 3; ++ index )
		cout<<arr2[ index ]<<endl;
	return 0;
}
