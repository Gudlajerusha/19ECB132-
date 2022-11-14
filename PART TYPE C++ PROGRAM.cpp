#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class parts
{
	private:
		    int partId;
		    string partName;
		    int cost;
		    int quantity;
	public:
		   void setData()
		   {
		   	cout<<"Enter partId:";
		   	cin>>this->partId;
		   	cout<<"Enter partName:";
		   	cin>>this->partName;
		   	cout<<"Enter cost:";
		   	cin>>this->cost;
		   	cout<<"Enter quantity:";
		   	cin>>this->quantity;
		   }
		   void displayData()
		   {
		   	cout<<"partId ="; cout<<this->partId<<endl;
		   	cout<<"partName ="; cout<<this->partName<<endl;
		   	cout<<"cost ="; cout<<this->cost<<endl;
		   	cout<<"quantity ="; cout<<this->quantity<<endl;
		   }		    
};
int main(int argc, char *argv[])
{
	parts X;
	X.setData();
	cout<<"part details are :";
	X.displayData();
	return 0;
}
