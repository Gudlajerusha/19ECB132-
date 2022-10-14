#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

class Bank
{
	private:
		int Accnumber;
		string name;
		float balance;
		static int totalAccounts; //Class Data Members
		
	public:
		Bank(); //Default constructor
		void getData();
		void display();
		static void displaytotalAccounts();
};
int Bank::totalAccounts;
Bank::Bank(){ totalAccounts = totalAccounts+1;
             Accnumber = totalAccounts;
             name="";balance = 0;}
void Bank::getData()
           {cout<<"Enter name of the A/c Holder:";cin>>name;
			cout<<"Enter amount at the time of open:";cin>>balance;} 
void Bank::display()
           {cout<<endl;
            cout<<"A/c Number:"<<setw(10)<<Accnumber<<endl;
            cout<<"A/c H.name:"<<setw(10)<<Accnumber<<endl;
            cout<<"Balance:"<<setw(10)<<balance<<endl;
           }
void Bank::displaytotalAccounts()
{
cout<<endl;
	cout<<"SBI,Rushikonda"<<endl;
	cout<<"Total account holders ="<<setw(5)<<totalAccounts<<endl;
}
int main(int argc,char*argv[])
{
	Bank jerusha;
	jerusha.getData();
	Bank priya;
	priya.getData();
cout<<"\n Ravi Details\n";jerusha.display();
cout<<"\n Balu Details\n";priya.display();
cout<<endl;
Bank::displaytotalAccounts();
return 0;
}







