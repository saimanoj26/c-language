#include<stdio.h>
int main()
{
int n,i,sum = 0;
 printf("enter a n number:");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
{
 sum=sum+i;
 printf("sum of %d value is:%d",n,sum);
 return 0;
}
}
