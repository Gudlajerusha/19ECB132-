#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class time
{
	private:
		    int hour;
		    int min;
            int sec;
    public:
    	   void setData()
    	   {
    	   	cout<<"Enter hour:";
    	   	cin>>this->hour;
    	   	cout<<"Enter min:";
    	   	cin>>this->min;
    	   	cout<<"Enter sec:";
    	   	cin>>this->sec;
		   }
		   void displayData()
		   {
		   	cout<<"hour ="; cout<<this->hour<<endl;
		   	cout<<"min ="; cout<<this->min<<endl;
		   	cout<<"sec ="; cout<<this->sec<<endl;
		   }
};
int main(int argc, char *argv[])
{
	time X;
	X.setData();
	cout<<"entered time is :";
	X.displayData();
	return 0;
}
