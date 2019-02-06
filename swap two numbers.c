#include <stdio.h>
int main()
{
   int a, b;
   printf("enter two integers :");
   scanf("%d%d", &a, &b);
   a = a + b;
   b = a - b;
   a = a - b;
   printf("a = %d\nb = %d\n",a,b);
   return 0;
}
