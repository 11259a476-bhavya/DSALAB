#include <stdio.h>
struct employee
{
int id;
char name[50];
int age;
float salary;
char department[30];
};
int main()
{
struct employee emp;
printf("enter employee ID:");
scanf("%d",&emp.id);
printf("enter employee name:");
scanf("%s",emp.name);
printf("enter employee age:");
scanf("%d",&emp.age);
printf("enter employee salary:");
scanf("%f",&emp.salary);
printf("enter employee department:");
scanf("%s",emp.department);
printf("\nemployee details\n");
printf("ID:%d\n",emp.id);
printf("name:%s\n",emp.name);
printf("age:%d\n",emp.age);
printf("salary:%2f\n",emp.salary);
printf("department:%s\n",emp.department);
return 0;
}
