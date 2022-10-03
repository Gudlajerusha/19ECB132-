#include<iostream>

using namespace std;

int main()
{
	float number1, number2, sum, average;
	cout << "enter two numbers: ";  //promot
	cin >> number1;         // read numbers
	cin >> number2;         //from keyboard
	
	sum= number1 + number2;
	average=sum/2;
	
	cout << "sum="<< sum<<"\n";
	cout <<"average="<< average <<"\n";
	 return 0;
}
