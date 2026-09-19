//WAP to demonstrate concept of structure
#include<stdio.h>
main(){
	struct Employee{
		//structure member
		int empid;
		char empname[60];
		long int salary;
	};
	struct Employee e;//structure variable
	printf("Enter Emnployee ID : ");
	scanf("%d",&e.empid);
	fflush(stdin);
	printf("Enter Emnployee Name : ");
	gets(e.empname);
	printf("Enter Emnployee Salary : ");
	scanf("%ld",&e.salary);
	printf("Emnployee's Details\n");
	printf("Emnployee ID :%d\n",e.empid);
	printf("Emnployee Name : %s\n",e.empname);
	printf("Emnployee Salary : %ld\n",e.salary);
	
}
