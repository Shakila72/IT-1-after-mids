#include<iostream>
using namespace std;
int A,B,C,D;
void Two(int A, int B, int& D)
 {
B = 21; D = 23;
cout << A << " " << B << " " << C<< " " << D << endl;
}
void One(int A, int B, int& C)
 {
int D; // Local variable
A = 10; B = 11; C = 12; D = 13;
cout << A << " " << B<< " " << C<< " " << D << endl;
Two(A,B,C);
}
int main()
 {
A = 1; B = 2; C = 3; D = 4;
One(A,B,C);
cout << A << " " << B << " " << C<< " " << D << endl;
Two(A,B,C);
cout << A << " " <<B << " " << C << " " << D << endl;
return 0;
}
