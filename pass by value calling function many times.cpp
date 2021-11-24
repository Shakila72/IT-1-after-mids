//pass by value/pointer                     one program  in two ways which is pass by value/reference
//pass by reference
#include<iostream>
using namespace std;

void a ( int y)                                 // y= 6
{
	cout<<"\ty ="<<y<<'\n';               // we can also write \n in double quotes wuth y 
	
}
int main()
{
	a(6);                                        //calling function fist time by syntax function name (parameters)
	int x = 7; 
	a(x);                                          // calling function second time
	a(x+1);                                       // calling function third time
	
	return 0;
}
