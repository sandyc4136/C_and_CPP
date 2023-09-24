#include<iostream>
using namespace std;
class Array{
private:
	int size;
	int *arr;
public:
	//Array *const this = &a1
	Array( void ){
		this->size = 0;
		this->arr = nullptr;
	}
	//Array *const this = &a1
	Array( int size ){
		cout << "Array( int size )" << endl;
		this->size = size;
		this->arr = new int[ size ];
	}
	//Array *const this = &a1
	void acceptRecord( void ){
		for( int index = 0; index < this->size; ++ index ){
			cout << "Enter element	:	";
			cin >> this->arr[ index ];
		}
	}
	//Array *const this = &a1
	void printRecord( void ){
		for( int index = 0; index < this->size; ++ index )
			cout << this->arr[ index ] << endl;
	}
	//Array *const this = &a1
	~Array( void ){	//Destructor
		if( this->arr != nullptr ){
			delete[] this->arr;
			this->arr = nullptr;
		}
	}
};
int main( void ){
	Array a1(3);	//Static memory allocation for object
	a1.acceptRecord( );
	a1.printRecord( );
	return 0;
}

int main2( void ){
	Array *ptr = new Array( 3 );
	ptr->acceptRecord( );
	ptr->printRecord( );
	delete ptr;
	return 0;
}
