#include<iostream>
using namespace std;
int sub(int a, int b)
 {
int result;
result = a - b;
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
// calling a function to subtract the values.
result = sub(a, b);
cout << "The answer is :" << result << endl;

return 0;
}
