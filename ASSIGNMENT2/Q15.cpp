// 15_armstrong_number.cpp
// Check if a Number is an Armstrong Number
#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
int count = 0;
while (n != 0) {
count++;
n /= 10;
}
return count;
}
bool isArmstrong(int n) {
if (n < 0) return false;
int digits = countDigits(n);
int temp = n;
long long sum = 0;
while (temp != 0) {
int digit = temp % 10;
sum += (long long)pow(digit, digits);
temp /= 10;
}
return sum == n;
}
int main() {
int num;
cout << "Enter a number: ";
cin >> num;
if (num < 0) {
cout << "Armstrong numbers are non-negative." << endl;
return 1;
}
int digits = countDigits(num);
int temp = num;
long long sum = 0;

cout << "\nNumber of digits: " << digits << endl;
cout << "Calculation: ";
bool first = true;
while (temp != 0) {
int digit = temp % 10;
if (!first) cout << " + ";
cout << digit << "^" << digits;
sum += (long long)pow(digit, digits);
temp /= 10;
first = false;
}
cout << " = " << sum << endl;
if (isArmstrong(num))
cout << num << " IS an Armstrong number." << endl;
else
cout << num << " is NOT an Armstrong number." << endl;
return 0;
}