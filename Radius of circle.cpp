#include<iostream>
using namespace std;
int main()

{
	const double PI=3.1415926;
	int radius;
	double area;
	cout<<"Enter positive value of radius of circle : ";
	cin>>radius;
	area=radius*radius*PI;
	cout<<"The area of circle is : "<<area;
	return 0;
}
