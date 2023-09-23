
#ifndef CALCULATOR_H_
#define CALCULATOR_H_

//  extern "C" int sum( int num1, int num2 );
//
//  extern "C"   int sub( int num1, int num2 );
//  extern "C"  int multiply( int num1, int num2 );
//  extern "C" int divide( int num1, int num2 );

  //------------------- OR ---------------------

  extern "C"{
   int sum( int num1, int num2 );
   int sub( int num1, int num2 );
   int multiply( int num1, int num2 );
   int divide( int num1, int num2 );
  }

#endif /* CALCULATOR_H_ */
