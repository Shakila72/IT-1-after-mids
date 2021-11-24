#include<iostream>
using namespace std;

void g (float & w, float & z)    // declaration of function
{                            // function definition
	float q;
	q= w;
	w= z;
	z= q;
	return;
}
void g (float & w, float & z);

int main()
{
	float r, s;
	cout<<"\tEnter first value : ";
	cin>>r;
	cout<<"\tEnter second value : ";
	cin>>s;
	cout<<"\tvalue before swape of r : "<< r << endl;
	cout<<"\tvalue before swape of s : "<< s << endl;
	
	g(r,s);                // calling function 
	
	cout<<"\tvalue after swape of r : "<<r<<endl;
	cout<<"\tvalue after swape of s : "<<s<<endl;
	return 0;
}
