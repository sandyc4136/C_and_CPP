#include<cstdio>
struct Employee{
  char name[ 30 ];  //structure member
  int empid;  //structure member
  float salary;  //structure member
};
struct Employee emp;
//struct Employee : Type Name
//emp: object
int main( void ){
   printf("name : %c\n",emp.name);
   printf("name : %d\n",emp.empid);
   printf("name : %f\n",emp.salary);
   return 0;
}

struct Employee1{
  char name[ 30 ];  //structure member
  int empid;  //structure member
  float salary;  //structure member
};
typedef struct Employee1 Employee_t;
struct Employee 1 emp1;   //OK
struct Employee_t emp3;  //NOT OK
