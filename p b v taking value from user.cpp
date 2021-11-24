#include<iostream>
using namespace std;

void a ( int y)                                 // y= 6
{
	cout<<"\ty ="<<y<<'\n';                
	
}
int main()
{
	a(6);                                        //calling function fist time by syntax function name (parameters)
	int x;
	cout<<"Enter number = ";
	cin>>x;
	a(x);                                          // calling function second time
	a(x+1);                                       // calling function third time
	
	return 0;
}
