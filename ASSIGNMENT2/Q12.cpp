// 12_prime_check.cpp
// Check if a Number is Prime
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
if (n <= 1) return false;
if (n <= 3) return true;
if (n % 2 == 0 || n % 3 == 0) 
return false ;
for (int i = 5; i <= sqrt(n); i += 6) {
if (n % i == 0 || n % (i + 2) == 0)
return false;
}
return true;
}
int main() {
int num;
cout << "Enter a number: ";
cin >> num;
if (isPrime(num))
cout << num << " IS a Prime number." << endl;
else
cout << num << " is NOT a Prime number." << endl;
return 0;
}