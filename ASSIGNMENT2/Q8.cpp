// 08_reverse_number.cpp
// Reverse a Number
#include <iostream>
using namespace std;
int main() {
long long num;
cout << "Enter a number: ";
cin >> num;
long long original = num;
long long reversed = 0;
bool isNegative = false;
if (num < 0) {
isNegative = true;
num = -num;
}
while (num != 0) {
int digit = num % 10;
reversed = reversed * 10 + digit;
num /= 10;
}
if (isNegative)
reversed = -reversed;
cout << "Original number : " << original << endl;
cout << "Reversed number : " << reversed << endl;
return 0;
}