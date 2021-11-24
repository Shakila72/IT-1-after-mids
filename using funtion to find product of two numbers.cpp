#include<iostream>
using namespace std;
int product(int a, int b)
 {
int result;
result = a * b;
return (result);
}
int main () 
{
// local variable declaration:
int a;
int b;
int result;
cout<<"Enter 1st value"<<endl;
cin>>a;
cout<<"Enter 2nd value"<<endl;
cin>>b;
// calling a function to multiply the values.
result = product(a, b);
cout << "Product is :" << result << endl;

return 0;
}
