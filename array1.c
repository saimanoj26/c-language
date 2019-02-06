#include<stdio.h>
int main()
{
 int arr[50],n,i,key,loc;
 printf("enter size: ");
 scanf("%d",&n);
  printf("Enter number: ");
 for(i=0;i<=n;i++);
{
 scanf("%d",&arr[i]);
}
 printf("enter element to insert:\n");
 scanf("%d",&key);
 printf("enter location to insert:\n");
 scanf("%d",&loc);
  for(i=n-1;i>=loc;i--)
{
 arr[i+1]=arr[i];
}
   arr[loc]=key;
}
