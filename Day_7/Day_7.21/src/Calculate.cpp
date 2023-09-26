#include"../include/Calculator"

#include"../include/ArithmaticException"
using namespace exception;

int util::calculate(int &num1, int &num2){
			if(num2==0){
				throw ArithmaticException("Divide by zero exception ");
			}
			return num1/num2;
		}




