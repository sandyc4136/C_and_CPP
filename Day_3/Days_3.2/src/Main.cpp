#include<cstdio>
class Employee{
private:
	char name[30];
	int empid;
	float salary;
public:
  void accept_record( void );
  void print_record(void);
  };

  void Employee::accept_record( void ){
    printf("Name    :   ");
    scanf("%s", name );
    printf("Empid   :   ");
    scanf("%d", &empid );
    printf("Salary  :   ");
    scanf("%f", &salary );
}
  void Employee::print_record( void ){
    printf("Name    :   %s\n", name);
    printf("Empid   :   %d\n", empid);
    printf("Salary  :   %f\n", salary);
 }

int main(void){
	Employee emp;
	emp.accept_record();
	emp.print_record();
	return 0;
}
