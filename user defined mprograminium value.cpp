#include<iostream>
using namespace std;
// function declaration
int min(int num1, int num2);
int main () {
// local variable declaration:
int a , b;
int ret;         //return value 
cout<<"Enter firt number :";
cin>>a;
cout<<"Enter second value :";
cin>>b;
// calling a function to get max value.
ret = min(a, b);
cout << "Minimum value is : " << ret << endl;
return 0;
}
// function returning the max between two numbers
int min(int num1, int num2) {   //function definition
int result;
if (num1 < num2)
result = num1;
else
result = num2;
return result;
}
