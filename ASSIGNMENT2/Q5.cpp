// 05_multiplication_table.cpp
// Print the Multiplication Table of a Number
#include <iostream>
using namespace std;

int main() {
int num;
cout << "Enter a number: ";
cin >> num;
cout << "\nMultiplication Table of " << num << ":" << endl;
cout << "-----------------------------" << endl;
for (int i = 1; i <= 10; i++) {
cout << num << " x " << i << " = " << num * i << endl;
}
return 0;
}