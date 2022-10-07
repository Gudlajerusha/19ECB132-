#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int intvar=25;
	float floatvar=54.32;
	
	cout<<"intvar = "<<intvar;
	cout<<"\nfloatvar = "<<floatvar;
	cout<<"\nfloat(intvar) = "<<float(intvar);
	cout<<"\nint(floatvar) = "<<int(floatvar);
	
	getch();
}
/*output:
intvar = 25
floatvar = 54.32
float(intvar) = 25
int(floatvar) = 54*/
