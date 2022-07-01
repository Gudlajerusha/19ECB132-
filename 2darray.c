#include<stdio.h>
int main(){
int twodarray[2][2];
int i,j;
for(i=0;i<2;i++){
for(j=0;j<2;j++)
{
printf("Enter value for twodarray[%d][%d]\t",i,j);
scanf("%d",&twodarray[i][j]);
}
}
printf("The elements of Two Dimensional Array are\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d \n",twodarray[i][j]);
}
}
return 0;
}
