// 09_gcd.cpp
// GCD (Greatest Common Divisor) of Two Numbers
// Uses the Euclidean Algorithm
#include <iostream>
using namespace std;
int gcd(int a, int b) {
while (b != 0) {
int temp = b;
b = a % b;
a = temp;
}
return a;
}
int main() {
int a, b;
cout << "Enter two positive integers: ";
cin >> a >> b;
if (a <= 0 || b <= 0) {
cout << "Please enter positive integers." << endl;
return 1;
}
cout << "GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;
return 0;
}