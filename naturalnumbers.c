#include<stdio.h>
 int main()
{
   int n,i,s;
   printf("Enter a natural number");
   scanf("%d",&n);
   i=1;
   while(i<=n)
   {
    s+=i;
   	++i;
   }
   printf("s=%d",s);
}
