#include<iostream>
using namespace std;
void swap (int&, int&); 
int main ( ) { 
    int ar[3];  // input integers 
        // Read in three elements. 
    cout << "Enter three integers: "; 
    cin >> ar[0] >> ar[1] >> ar[2]; 
  if (ar[0] > ar[1]) swap (ar[0], ar[1]); 
  if (ar[1] > ar[2]) swap (ar[1], ar[2]); 
  if (ar[0] > ar[1]) swap (ar[0], ar[1]); 
  cout << "The sorted integers are " << ar[0] <<", " << ar[1] << ", " << ar[2]  << endl; 
  return 0;   
}
