   #include <iostream>
  using namespace std;
  int Number; //global variable         
  void Increment(int IncNum) {  
      IncNum = IncNum + 3; 
      cout << IncNum << endl; 
      Number = Number + 1;  }              
  int main() { 
      Number = 1; 
      Increment(Number); 
      cout << Number << endl; 
      return 0;
  } 

