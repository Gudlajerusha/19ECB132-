#include <iostream>
using namespace std;
int m=10;            //global m
int main()
{
	int m=20;     // m redeclared, local to main
	{
		int k= m;
		int m=30;    // m declared again
		             // local to inner block
		cout << "we are in inner block \n";
		cout <<"k =" << k << "\n";
		cout << "m =" << m << "\n";
		cout << "::m =" << ::m << "\n";
	}
	cout<<"\nwe are in outer block \n";
	cout << "m =" << m << "\n";
	cout << "::m =" << ::m << "\n";
	
	return 0;
}
/*output:
we are in inner block
k =20
m =30
::m =10

we are in outer block
m =20
::m =10*/
