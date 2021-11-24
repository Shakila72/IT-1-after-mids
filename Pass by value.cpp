#include<iostream>
using namespace std;
int sum(int num_1, int num_2) 
{
     		num_1 = num_1 + num_2;
     		return num_1;
}
int main()
{
	int var_x, var_y, var_z;
    var_x = 3;  var_y = 5;
    var_z = sum(var_x,var_y);
	cout << var_z << endl;
    return 0;
    
}
