# include<stdio.h >
# include<conio.h >
int  main( )
{
int n, i, flag = 0 ;
printf(" Enter a positive integer: ") ;
scanf("%d", &n) ;
for(i = 2; i <= n/2; ++i )
{
    if ( checkPrime(i) == 1 )
    {
        if ( checkPrime(n-i) == 1)
        {
            printf(" %d = %d + %d\n", n, i, n - i) ;
            flag = 1 ;
        }
    }
}

if ( flag == 0 )
    printf("%d Cannot be expressed as the sum of two prime numbers.", n ) ;

return (0) ;
}
int  checkPrime(int n)
{
int i, isPrime = 1 ;
for( i = 2; i <= n/2; ++i )
{
    if( n % i == 0 )
    {
        isPrime = 0 ;
        break ;
    }
}
return isPrime ;
}
