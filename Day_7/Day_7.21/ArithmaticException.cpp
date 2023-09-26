#include<iostream>
#include"../include/ArithmaticException"
using namespace exception;

#include<string>
using namespace std;

ArithmaticException::ArithmaticException(string message): message(message){

	}
	void ArithmaticException :: printStackTrace(){
		cout<<message;
	}
