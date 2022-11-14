#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class bank
{
	private:
		    int accountnumber;
		    string name;
		    float balance;
		    static int totalaccounts;
	public:
		   bank();
		   void getData();
		   void display();
		   static void displaytotalaccounts();	
		   void deposit(float n);
		   void withdraw(float m);   
};
int bank :: totalaccounts;
bank :: bank()
{
	totalaccounts = totalaccounts + 1;
	accountnumber = totalaccounts;
	name = "";
	balance = 0;
}
void bank :: getData()
{
	cout<<"enter name of a/c holder:";
	cin>>name;
	cout<<"enter amount at the time of open";
	cin>>balance;
}
void bank :: display()
{
	cout<<endl;
	cout<<"a/c number:"<<setw(10)<<accountnumber<<endl;
	cout<<"a/c holder name:"<<setw(10)<<name<<endl;
	cout<<"balance:"<<setw(10)<<balance<<endl;
}
void bank :: displaytotalaccounts()
{
	cout<<endl;
	cout<<"SBI.Rushikonda"<<endl;
	cout<<"Total account holders ="<<setw(5)<<totalaccounts<<endl;
}
void bank :: deposit(float n)
{
	cout<<endl;
	cout<<"enter deposit amount: "<<setw(10)<<deposit<<endl;
	cin>>deposit;
}
void bank :: withdraw(float m)
{
	cout<<endl;
	cout<<"enter withdraw amount: "<<setw(10)<<withdraw<<endl;
	cin>>withdraw;
}
int main(int argc, char *argv[])
{
	bank ravi;
	ravi.getData();
	bank balu;
	balu.getData();
	cout<<"\n ravi details \n"; ravi.display();
	cout<<"\n balu details \n"; balu.display();
	cout<<endl;
	bank :: displaytotalaccounts();
	return 0;
}
