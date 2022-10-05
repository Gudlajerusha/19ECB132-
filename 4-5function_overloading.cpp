//Function area() is overloaded three times
#include<iostream>
//Decclaration of Function Prototypes
int area(int);
int area(int,int);
float area(float);
  
int main()  
{
    cout<<"Calling the area() function for computing the area of a square(side = 4)- "<<area(4)<<"\n";
	cout<<"Calling the area() function for computing the area of a rectangle(length=4, breadth=7)-"<<area(4,7)<<"\n";
    cout<<"Calling the area() function for computing the area of a circle(radius=4.5)-"<<area(4.5)<<"\n";
return 0;    
}

int area (int side)                                   //Area of square
{
	return(side*side);
}
int area(int length, int breadth)                    //Area of rectangle
{
    return(length*breadth);
}
float area(float radius)                            //Area of circle
{
     return(3.14*radius*radius);
}