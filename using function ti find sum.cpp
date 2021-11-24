#include<iostream>
using namespace std;
int sum(int a, int b)    //function declaration
 {               //function definition
int result;
result = a + b;
return (result);
}
int main () {
// local variable declaration:
int a = 100;
int b = 200;
int result;
// calling a function to add the values.
result = sum(a, b);
cout << "Total value is :" << result << endl;

return 0;
}
