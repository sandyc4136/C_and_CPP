#include<iostream>
using namespace std;

class Math{
public:
	static const double PI;
public:
	static double pow( double base, int index ){
		double result = 1;
		for( int count = 1; count <= index ; ++ count )
			result = base * result;
		return result;
	}
};
const double Math::PI = 3.14;
int main( void ){
	double result = Math::pow( 2.0, 3 );
	cout << "Result	:	"<<result <<endl;
	return 0;
}
