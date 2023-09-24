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
	//const Array &other = a1
	//Array *const this = &a2
	Array( const Array &other ){
		cout << "Array( const Array &other )" << endl;
		//1. Copy size
		this->size = other.size;
		//2. Allocate new resource
		this->arr = new int[ this->size ];
		//3. Copy the contents from source object into destination object.
		for( int index = 0; index < this->size; ++ index )
			this->arr[ index ] = other.arr[ index ];
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
	Array a1(3);
	a1.acceptRecord( );
	//Array a2 = a1;
	Array a2 ( a1 );
	a2.printRecord( );
	return 0;
}

