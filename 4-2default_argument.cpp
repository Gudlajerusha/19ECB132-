#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	float amount;
	float value( float p, int n, float r=0.15);  //prototype
	void printline(char ch='*', int len=45);    //prototype
	
	printline();                                //use default value of arguments
	
	amount = value(5000.00,5);                 //default for 3rd argument
	cout<<"\n Final value = "<<amount<<"\n\n";
	
    amount = value(10000.00,5,0.30);           //pass all arguments explicitly
	cout<<"\n Final value = "<<amount<<"\n\n";
	
		printline('=');                        //use default value of  second arguments
		
		getch();
		return 0;
	 	
}

float value(float p,int n,float r)
{
	 int year = 1;
	 float sum = p;
	 
	 while(year<=n)
	 {
	 	sum= sum* (1+r);
	 	year = year+1;
	 }
	 return(sum);
	 
}

void printline(char ch,int len)
{
	for(int i=1;i<=len;i++)
	printf("%c",ch);
	printf("\n");
}


