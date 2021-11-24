#include<iostream>
using namespace std;
void a ( int y)
{
	cout<<"\ty = "<<y<<'\n';
	
	y = 6;
	cout<<"\ty = "<<y<<'\n';
}
    int main()
    {
    	int x= 5;
    	cout<<"\tx = "<<x<<'\n';
    	
    	
    	a(x);
    	cout<<"\tx = "<<x<<'\n';
    	return 0;
	}
