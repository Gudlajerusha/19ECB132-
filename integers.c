

#include <stdio.h>

int main()
{
    int n;
    int dig, revNumber;

    printf("Enter an integer number : ");
    scanf("%d", &n);

    /*Reversing Number*/
    revNumber = 0;

    while (n > 0) {
        dig = n % 10;
        revNumber = (revNumber * 10) + dig;
        n = n / 10;
    }

    printf("Reverse Number is : %d\n", revNumber);
    return 0;
}



Enter an integer number : 3
Reverse Number is : 3