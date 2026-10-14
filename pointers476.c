#include <stdio.h>
int main()
{
int a=10;
int *p;
p= &a;
printf("value of a = %d\n",a);
printf("Address of a = %p\n",&a);
printf("Value using pointer=%d\n",*p);
return 0;
}
