#include <stdio.h>
main()
{  
    int n1=1,n2=1,n3,i,n;
    scanf("%d",&n);
    printf("%d\n%d",n1,n2);
    for (i=1;i<=n;i++)
    { 
      n3=n1+n2;
      printf("\n%d",n3);
      n2=n2;
      n3=n3;}
}
