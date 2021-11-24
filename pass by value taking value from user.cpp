#include<iostream>
using namespace std;
void a ( int y)
{
	cout<<"\ty = "<<y<<'\n';
	
    cout<<"Enter value = ";
    cin>>y;
	cout<<"\ty = "<<y<<'\n';
}
    int main()
    {
    	int x;
    	cout<<"Enter value = ";
    	cin>>x;
    	cout<<"\tx = "<<x<<'\n';
    	
    	
    	a(x);
    	cout<<"\tx = "<<x<<'\n';
    	return 0;
	}
