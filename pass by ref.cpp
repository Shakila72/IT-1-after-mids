// pass by reference

#include<iostream>
using namespace std;

void z (int & x, int & y)    // declaration of function
{                            // function definition
	int c;
	c= x;
	x= y;
	y= c;
	return;
}
void z (int & x, int & y);

int main()
{
	int a= 10;
	int b= 20;
	cout<<"value before swape of a : "<< a << endl;
	cout<<"value before swape of b : "<< b << endl;
	
	z(a,b);
	
	cout<<"value after swape of a : "<<a<<endl;
	cout<<"value after swape of b : "<<b<<endl;
	return 0;
}
