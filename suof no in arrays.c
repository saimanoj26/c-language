#include <stdio.h>

int  main()
{
    int i,sum=0,a[100]={1,2,3,4};
    for(i=0; i<5; i++)
    {
        sum += a[i];
    }
    printf("Sum : %d", sum);
}
