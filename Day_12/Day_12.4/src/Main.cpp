#include"../include/Employee"

int main( void ){
	Employee emp( "Sandeep" , 40, 3778, 45000.50f );
	emp.printRecord( );
	return 0;
}
/*int main2( void ){
	Employee emp( "Sandeep" , 40, 3778, 45000.50f );
	//emp.Person::printRecord( );
	emp.printRecord( );
	return 0;
}
int main1 ( void ){
	Employee emp( "Sandeep" , 40, 3778, 45000.50f );
	//emp.Person::printRecord( );
	emp.Employee::printRecord( );
	return 0;
}*/
