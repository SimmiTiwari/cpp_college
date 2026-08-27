// 10_lcm.cpp
// LCM (Least Common Multiple) of Two Numbers
// Uses the relation: LCM(a, b) = (a * b) / GCD(a, b)
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
long long lcm(int a, int b) {
return ((long long)a / gcd(a, b)) * b;
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
cout << "LCM of " << a << " and " << b << " = " << lcm(a, b) << endl;
return 0;
}