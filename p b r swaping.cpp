#include<iostream>
using namespace std;
    void swap( float & x, float & y); // function termination


int main()
{
	float a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	if(a>b)
	swap( a,b );
	
	else;
	
	cout<<"sorted numbers : ";
	cout<<a<<b<<endl;
	return 0;
}


void swap( float & x, float & y)   // function declaration

{
	float temp;
	temp=x;
	x=y;
	y=temp;
}
