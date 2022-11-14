#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
	private:
		    int a[10][10];
	        int row;
	        int col;
	public:
		   matrix();
           matrix(int n, int m);
	       void readmatrix();
	       matrix addition(matrix X);
	       void displaymatrix();
};
int main(int argc, char *argv[])
{
	return 0;
}
