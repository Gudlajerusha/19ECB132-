#include<stdio.h>
int main()
{
    int n;int c=1;
    scanf("%d",&n);
    
    do
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        c=c+1;
    }
    
    while(n>1);
    printf("%d",c);
    return 0;
}
