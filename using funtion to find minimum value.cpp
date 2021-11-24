#include<iostream>
using namespace std;

int min(int num1, int num2);            // function declaration
int main ()
 {
// local variable declaration:
int a = 23;
int b = 43;
int ret;
// calling a function to get minimum value.
ret = min(a, b);
cout << "Smaller value is : " << ret << endl;
return 0;
}

int min(int num1, int num2)    // function returning the minimum value between two numbers
 {
// local variable declaration
int result;
if (num1 < num2)
result = num1;
else
result = num2;
return result;
}
