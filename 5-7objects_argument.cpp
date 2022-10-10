#include<iostream>
#include<iomanip>
using namespace std;
class time{
	int hours;
	int minutes;
	public:
		void get(){
			cout<<"hours is: ";
			cin>>this->hours;
			cout<<"minutes is: ";
			cin>>this->minutes;
		}
		void put(){
			cout<<"hours is: "<<this->hours<<endl;
			cout<<"minutes is: "<<this->minutes<<endl;
		}
		void sum(time t1,time t2){
			minutes=t1.minutes+t2.minutes;
			hours=minutes/60;
			minutes=minutes%60;
			hours=hours+t1.hours+t2.hours;
		}
};    
int main(){
	time t1,t2,t3;
	t1.get();
	t2.get();
	t3.sum(t1,t2);
	//cout<<"t1: ";
		
	//cout<<"t2: ";
	
	cout<<"sum of above times is- "<<endl;
	t3.put();
	}
