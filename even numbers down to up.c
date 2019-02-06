#include <stdio.h>

int main () {

   int a;
   for( a = 20; a >= 0 ; a = a - 1 ){
   if(a%2==0)
     printf("value of a: %d\n", a);
   }

   return 0;
}
