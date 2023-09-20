# 1 "Main.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 428 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "Main.cpp" 2
# 1 "./../include/Employee.h" 1





class Employee{
private:
 char name[30];
 int empid;
 float salary;
public:
  void accept_record( void );
  void print_record(void);
  };
# 2 "Main.cpp" 2
int main(void){
 Employee emp;
 emp.accept_record();
 emp.print_record();
 return 0;
}
