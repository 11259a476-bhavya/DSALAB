#include <stdio.h>
int main()
{
int arr[100],n,i,key,found=0;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(arr[i]==key)
{
printf("elements found at position %d",i+1);
found = 1;
break;
}
}
if (found==0)
{
printf("element notfound");
}
return 0;
}



