 #include"../include/Complex"
using namespace nutil;

#include"../include/illegalArgumentException"
using namespace exception;

Complex :: Complex(int real, int imag)throw(illegalArgumentException){
	this->setReal(real);
	this->setImag(imag);
	}
	void  Complex :: setReal(const int real) throw(illegalArgumentException){
		if(real<0)
			throw illegalArgumentException("Invalid Real number");
		this->real=real;
	}
	void Complex :: setImag(const int imag) throw(illegalArgumentException){
		if(imag<0)
					throw illegalArgumentException("Invalid Imag number");
		this->imag=imag;
	}
	int  Complex :: getReal(void) const throw(){
		return real;
	}
	int  Complex :: getImag(void) const throw(){
			return imag;
		}



