#include <stdio.h>
int main()
{
int arr[100],n,i;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
