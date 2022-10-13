#include<iostream>
using namespace std;
int const m = 50;
class ITEMS
{
	private:
		    
		    int itemcode[m];
		    float itemprice[m];
		    int count;
	public:
		   void CNT(void) {count = 0;}
		   void getitem(void);
		   void displaysum(void);
		   void remove(void);
		   void displayitems(void);
};
void ITEMS :: getitem(void)
{
	cout<<"enter item code:";
	cin>>itemcode[count];
	cout<<"enter item cost :";
	cin>>itemprice[count];
	count++;
}
void ITEMS :: displaysum(void)
{
	float sum = 0;
	for(int i=0;i<count;i++)
	  sum = sum + itemprice[i];
	  cout<<"\n total value :"<<sum<<"\n";
}
void ITEMS :: remove(void)
{
	int a;
	cout<<"enter item code:";
	cin>>a;
	for(int i=0;i<count;i++)
	  if(itemcode[i] == a)
	  itemprice[i] = 0;
}
void ITEMS :: displayitems(void)
{
	cout<<"\n code price\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<""<<itemprice[i];
	}
	cout<<"\n";
}
int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do
	{
		cout<<"\n you can do the following";
		cout<<"enter appropriate number \n";
		cout<<"\n1 : add an item";
		cout<<"\n2 : display total value";
		cout<<"\n3 : delete an item";
		cout<<"\n4 : display all items";
		cout<<"\n5 : quit";
		cout<<"\n\n what is your option?";
		cin>>x;
		switch(x)
		{
			case1 : order.getitem();break;
			case2 : order.displaysum();break;
			case3 : order.remove();break;
			case4 : order.displayitems();break;
			case5 : break;
			default : cout<<"error in input;try again\n";
		}
	}while(x!=5);
return 0;
}
