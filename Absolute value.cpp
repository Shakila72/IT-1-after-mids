#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x ,result;
    cout<<" Enter negative or positive number ;";
    cin>>x;

    result = abs(x);                //abs is used for absolute function
    cout << "abs(" << x << ") = |" << x << "| = " << result << endl;

    return 0;
}
