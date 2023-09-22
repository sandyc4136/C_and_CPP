

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee{
private:
	char name[30];
	int empid;
	float salary;
public:
  void accept_record( void );
  void print_record(void);
  };



#endif /* EMPLOYEE_H_ */
