#include<cstdio>
#include<cstring>
#include<cstdlib>

int main( void ){
	struct Employee{
		char name[30];
		int empid;
		float salary;
	};
//	emp1.name="Sandip";
	// char array not assignable through object
//	strcpy(emp1.name,"sandip");
//	emp1.empid=22;
//	emp1.salary=98494.44f;
//	printf("Name : %s\n",emp1.name);
//	printf("Empid : %d\n",emp1.empid);
//	printf("Salary : %f\n",emp1.salary);

	struct Employee arr[3];
	for(int i=0;i<3;i++){
		strcpy(arr[i].name,"Xavier");
		arr[i].empid=34;;
		arr[i].salary=89423874.44f;
		printf("Name : %s\n",arr[i].name);
		printf("empid : %d\n",arr[i].empid);
		printf("salary %f\n",arr[i].salary);
	}


//	struct Employee *ptr=&emp1;
//	printf("Name : %s\n",ptr->name);
//		printf("Empid : %d\n",ptr->empid);
//		printf("Salary : %f\n",ptr->salary);
	return 0;

}
