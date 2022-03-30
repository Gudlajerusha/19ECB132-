#include<stdio.h>
int main()
{
	int array,i,number;
	printf("\n Enter the number of elements in an array:");
	scanf("%d",&number);
	
	printf("\n please enter %d elements of an array\n",number);
	for(i=0;i<number;i++)
	{
		scanf("%d",&i);
	}
	printf("\n elements in this array are:\n");
	for(i=0;i<number;i++)
	{
	  printf("%d\t",&i);
	}
	return 0;
}