// Matrix Addition program 
#include<iostream>
#include<iomanip>
using namespace std;

class Matrix
{
	int a[10][10];
	int row;
	int col;
	public:
		Matrix();
        Matrix(int n, int m);
	    void readMatrix();
	    Matrix addMatrix(Matrix X);
	    void displayMatrix();
};
Matrix::Matrix()
{row=10; col=10; for(int i=0;i<10;i++)
		        for(int j=0;j<10;j++) a[i][j]=0;
}

Matrix::Matrix(int n, int m)
{            row=n; col=m; for(int i=0;i<n;i++)
		        for(int j=0;j<m;j++) a[i][j]=0;
}

void Matrix::readMatrix()
{          for(int i=0;i<row;i++)
	{
      cout<<"Enter row "<<i+1<<" x "<<col <<" Elements: ";	
		        for(int j=0;j<col;j++) cin>>a[i][j];}
}
void Matrix::displayMatrix()
{
	for(int i=0;i<row;i++)
	{
                 cout<<endl;	
	  for(int j=0;j<col;j++) cout<<setw(5)<<a[i][j]; } 
}

Matrix Matrix::addMatrix(Matrix X)
{
	Matrix Temp(4,5);
    for(int i=0;i<row;i++)	for(int j=0;j<col;j++)
      Temp.a[i][j] = a[i][i] + X.a[i][j];	
	return Temp;
}
int main()
{
	Matrix obj1(4, 5), obj2(4,5), obj3(4,5);
	cout<<"Matrix 1"<<endl;  obj1.readMatrix() ;
	cout<<"matrix 2"<<endl;   obj2.readMatrix() ;
	obj3 = obj1.addMatrix(obj2);
	cout<<" Resulted Matrix Addition "<<endl;
	obj3.displayMatrix() ;
	return 0;
}
