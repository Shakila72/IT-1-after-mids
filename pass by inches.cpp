#include <iostream> 
#include"i2f.h"
using namespace std;

int main() { 
    int inches; // Number of inches         
    cout << "Enter number of inches to convert:"; 
    cin  >> inches; 
    cout << "Result is "<< feet(inches)<<" feet " 
         << remain_inches(inches) << " inches" 
         << endl;  
    return 0;  }

