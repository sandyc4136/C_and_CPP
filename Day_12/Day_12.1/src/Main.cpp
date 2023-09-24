#include<iostream>
using namespace std;

class Matrix{
private:
	int row;
	int col;
	int **arr;
public:
	Matrix( void ){
		this->row = 0;
		this->col = 0;
		this->arr = nullptr;
	}
	Matrix( int row, int col ){
		this->row = row;
		this->col = col;
		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];
	}
	//const Matrix &other = m1
	//Matrix *const this = &m2
	Matrix( const Matrix &other ){
		this->row = other.row;
		this->col = other.col;

		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];

		for( int i = 0; i < this->row; ++ i ){
			for( int j = 0; j < this->col; ++ j ){
				this->arr[ i ][ j ] = other.arr[ i ][ j ];
			}
		}
	}
	Matrix operator+( Matrix &other ){
		Matrix result( this->row, this->col);
		for( int i = 0; i < this->row; ++ i ){
			for( int j = 0; j < this->col; ++ j ){
				result.arr[ i ][ j ] = this->arr[ i ][ j ] + other.arr[ i ][ j ];
			}
		}
		return result;
	}
	//const Matrix &other = m1
	//Matrix *const this = &m2
	Matrix& operator=( const Matrix &other ){
		this->~Matrix( );
		this->row = other.row;
		this->col = other.col;

		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];

		for( int i = 0; i < this->row; ++ i ){
			for( int j = 0; j < this->col; ++ j ){
				this->arr[ i ][ j ] = other.arr[ i ][ j ];
			}
		}
		return (*this);
	}
	~Matrix( void ){
		if( this->arr != nullptr ){
			for( int index = 0; index < this->row; ++ index )
				delete[] this->arr[ index ];
			delete[] this->arr;
			this->arr = nullptr;
		}
	}
	friend istream& operator>>( istream& cin, Matrix &other ){
		for( int i = 0; i < other.row; ++ i ){
			for( int j = 0; j < other.col; ++ j ){
				cout << "Enter element	:	";
				cin >> other.arr[ i ][ j ];
			}
		}
		return cin;
	}
	friend ostream& operator<<( ostream& cout, const Matrix &other ){
		for( int i = 0; i < other.row; ++ i ){
			for( int j = 0; j < other.col; ++ j ){
				cout << other.arr[ i ][ j ] <<"	";
			}
			cout << endl;
		}
		return cout;
	}
};
int main( void ){
	Matrix m1( 2, 3 );
	cin >> m1;

	Matrix m2( 2, 3 );
	cin >> m2;

	Matrix m3;
	m3 = m1 + m2;	//m3 = m1.operator+( m2 );

	cout << m3;
	return 0;
}
