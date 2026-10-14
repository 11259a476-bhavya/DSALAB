#include <stdio.h>
struct employee
{
int id;
char name[50];
float salary;
};
int main()
{
struct employee emp[5];
int n,i;
printf("enter number of employee:");
scanf("%d",&n);
for(i-0;i<n;i++)
{
printf("\n enter details of employee %d\n",i+1);
printf("ID:");
scanf("%d",&emp[i].id);
printf("Name:");
scanf("%s",&emp[i].name);
printf("Salary:");
scanf("%f",&emp[i].salary);
}
printf("\n employee details \n");
for(i=0;i<n;i++)
{
printf("\n employee%d\n",i+1);
printf("ID: %d\n",emp[i].id);
printf("Name:%s\n",emp[i].name);
printf("Salary:%2f\n",emp[i].salary);
}
return 0;
}
