#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
	private:
		    int row;
		    int col;
		    int A[10][10];
	public:
		   matrix(int p,int q)
		   {
		   	  row = p;
		   	  col = q;
		   	  for(int i=0;i<10;i++)
		   	  for(int j=0;j<10;j++)
		   	  A[i][j] = 0;
		   }
		   void getData()
		   {
		   	  int p,q;
		   	  for(int i=0;i<p;i++)
		   	     for(int j=0;j<q;j++)
		   	        cin>>A[i][j];
		   }
		   void transpose(matrix X)
		   {
		   	  int x[3][3];
		   	  row = x.col;
		   	  col = x.row;
		   	  for(int i=0;i<row;i++)
		   	     for(int j=0;j<col;j++)
		   	        A[i][j] = X.A[j][i];
		   }
		   void display()
		   {
		   	  for(int i=0;i<row;i++)
		   	    {
		   	      cout<<endl;
				}
			  for(int j=0;j<col;j++)
			    {
			      cout<<setw(5)<<A[i][j];
				}
		
		   }
};
int main(int argc, char *argv[])
{
	matrix m1(3,3),m2;
	m1.setData();
	m2.transpose(m1);
	cout<<"transpose of m1"<<endl;
	m2.display();
	return 0;
}
