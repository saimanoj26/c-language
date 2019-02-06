#include <stdio.h>
int main()
{
     int arr[10], i, n,sum = 0, average;
     printf("Enter n: ");
     scanf("%d", &n);
     for(i=0; i<n;i++)
     {
          printf("Enter number: ");
          scanf("%d", &arr[i]);
          sum += arr[i];
     }
     average = sum/n;
     printf("Average = %d", average);
     return 0;
}
