#include"../include/illegalArgumentException"
using namespace exception;

illegalArgumentException :: illegalArgumentException(string message): message(message){
	}
	string illegalArgumentException :: getMessage(void) const{
		return this->message;
	}



