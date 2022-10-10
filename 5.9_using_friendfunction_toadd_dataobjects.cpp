#include<iostream>
using namespace std;
class abc;
class xyz{
	int data;
	public:
		void setvalue(int value){
			data=value;
		}
		friend void sub(xyz,abc);
};
class abc{
	int data;
	public:
		void setvalue(int value){
			data=value;
		}
		friend void sub(xyz,abc);	
};
void sub(xyz p,abc q){
	cout<<"difference of data values of xyz and abc objects using friend functions = "<<p.data-q.data;
}
int main()
{
	xyz m;
	abc n;
	m.setvalue(5);
	n.setvalue(50);
	sub(m,n);
	return 0;
}
