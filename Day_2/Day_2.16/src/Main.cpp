#include<cstdio>
int main( void ){
  //Local structure
  struct Employee{
    char name[ 30 ];
    int empid;
    float salary;
};
  struct Employee arr[3];
  //struct Employee: Data type
  //emp: object
  for(int i=0;i<3;i++){
	  printf("Name  :   ");
	    scanf("%s",arr[i].name);
	    printf("Empid :   ");
	    scanf("%d",&arr[i].empid);
	    printf("Salary    :   ");
	    scanf("%f", &arr[i].salary);
	  printf("Name  :   %s\n", arr[i].name);
	  printf("Empid :   %d\n", arr[i].empid);
	  printf("Salary    :   %f\n", arr[i].salary);
  }

//printf("%-30s%-5d%-10.2f\n", name, empid, salary);
return 0; }
