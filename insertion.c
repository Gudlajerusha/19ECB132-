#include <stdio.h>

main() {
   int LA[] = {1,3,5,7,8};
   int item = 10, k = 3, n = 5;
   int i = 0, j = n;
   
   printf("The original array elements are :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

   n = n + 1;
	
   while( j >= k) {
      LA[j+1] = LA[j];
      j = j - 1;
   }

   LA[k] = item;

   printf("The array elements after insertion :\n");

   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}
/*output:
The original array elements are :
LA[0] = 1 
LA[1] = 3 
LA[2] = 5 
LA[3] = 7 
LA[4] = 8 
The array elements after insertion :
LA[0] = 1 
LA[1] = 3 
LA[2] = 5 
LA[3] = 10 
LA[4] = 7 
LA[5] = 8 
*** stack smashing detected ***: terminated
Aborted*/
