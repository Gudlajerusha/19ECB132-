#include<iostream>
using namespace std;
class sample{
	int a;
	int b;
	int c;
	int d;
	public:
		void set(){
			cout<<"a= ";
			cin>>this->a;
			cout<<"b= ";
			cin>>this->b;
			cout<<"c= ";
			cin>>this->c;
			cout<<"d= ";
			cin>>this->d;
		}
		friend float average(sample x){
			return float(x.a+x.b+x.c+x.d)/4.0;
		}
		
};
int main(){
	sample p;
	p.set();
	cout<<"average value is: "<<average(p);
	}
