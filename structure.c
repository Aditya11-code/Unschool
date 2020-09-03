#include<stdio.h>
#include<string.h>
struct employee {
	char name [50];
	int id ;
	char expe [50];
	int salary;
};
int main()
{
	int i , num;
	printf("Enter the number of Employees: ");
	scanf("%d" , &num);
	struct employee emp[num];
	for( i=1; i<=num; i++)
	{
		printf("\nEnter the name of %d Employee : " , i);
		scanf("%s" , &(emp[i].name));
		printf("\nEnter the Employee ID of %d Employee  : " , i);
		scanf("%d" , &(emp[i].id));
		printf("\nEnter the Experience of %d Employee  : " , i);
		scanf("%s", &(emp[i].expe));
		printf("\nEnter the salary of %d Employee  : " , i);
		scanf("%d" , &(emp[i].salary));
	}
	for( i=1; i<=num; i++)
	{
		printf("\nDetails of %d Employee are : " , i);
		printf("\nName is %s" , emp[i].name);
		printf("\nID are %d" , emp[i].id);
		printf("\nExperience is of %s" , emp[i].expe);
		printf("\nSalary are %d" , emp[i].salary);
	}
	return 0;
}
