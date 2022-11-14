#include<iostream>
#include<iomanip>
using namespace std;
class DF;
class DM
{   private:
	   float lm;
	public:
	   BM() { lm=0;}
	   void getData()
	   {         	cout<<"Enter lm value: "; cin>>lm; }
	    void display()
	   {      cout<<"\n distance in Meters: "<<lm<<endl;  }
	friend float sum(DM X, DF Y);
};
class DF
{   private:
	   float lf;
	public:
	   BM() { lf=0;}
	   void getData()
	   {         	cout<<"Enter lm value: "; cin>>lf;}
	    void display()
	   {         	cout<<"\n distance in Feet: "<<lf<<endl; }
	friend float sum(DM X, DF Y);
};

float sum(DM X, DF Y)
{           float dis;
	dis=X.lm+(Y.lf)*(0.3048);
	return dis;
}
int main( int argc, char* argv[])
{           DM objm; objm.getData(); DF objf; objf.getData();
	float r = sum(objm, objf);
	cout<<"Total distance = "<<r<<" m"<<endl;
	return 0;
}

