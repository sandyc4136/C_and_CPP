#include"../include/IllegalArgumentException"
using namespace exception;
IllegalArgumentException::IllegalArgumentException( string message ) : message ( message ){
}
string IllegalArgumentException::getMessage( void )const{
	return this->message;
}
