// 11_palindrome.cpp
// Check if a Number is a Palindrome
#include <iostream>
using namespace std;
int main() {
long long num;
cout << "Enter a number: ";
cin >> num;
if (num < 0) {
cout << num << " is NOT a Palindrome (negative numbers are not palindromes)." << endl;
return 0;
}
long long original = num;
long long reversed = 0;
long long temp = num;
while (temp != 0) {
int digit = temp % 10;
reversed = reversed * 10 + digit;
temp /= 10;
}
if (original == reversed)
cout << original << " IS a Palindrome." << endl;
else
cout << original << " is NOT a Palindrome." << endl;
return 0;
}