#include<stdio.h>
int main()
{
int numbers[4];
printf("We are initializing in run time\n");
printf("Enter elements one by one\n");
for(int i=0;i<4;i++)
{
scanf("%d",&numbers[i]);
}
printf("The array elements are \n");
for(int i=0;i<4;i++)
{
printf("%d\n",numbers[i]);
}
return 0;
}
/*output:
We are initializing in run time
Enter elements one by one
1
2
3
4
The array elements are 
1
2
3
4*/
