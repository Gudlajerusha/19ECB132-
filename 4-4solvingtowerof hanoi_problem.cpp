#include<iostream>
#include<conio.h>
using namespace std;

void TOH(int d,char tower1,char tower2,char tower3)
{
	if(d==1)                                   //bbase case
	{
		cout<<"\nShift top disk from tower" << tower1<<"to tower"<< tower2;
		return;
	}
	
	TOH(d-1,tower1,tower3,tower2);           //recurssive function call
	cout<<"\nShift top disk from tower" << tower1<<"to tower"<< tower2;
	
	TOH(d-1,tower3,tower2,tower1);           //recurssive function call
}
 int main()
 {
 	int disk;
 	
 	cout <<"Enter the number of disks: ";
 	cin >> disk;
 
    if (disk < 1)
    cout << "\nThere are no disks to shift";
    else
    cout<<"\nThere are" << disk <<"disks in tower 1\n";
    
    TOH(disk,'1','2','3');
    cout <<"\n\n"<< disk <<"disks in tower 1 are shifted to shifted 2";
    
    getch();
    return 0;
 }
