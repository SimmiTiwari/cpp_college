// 13_primes_in_range.cpp
// Print all Prime Numbers in a Given Range
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
if (n <= 1) return false;
if (n <= 3) return true;
if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i <= sqrt(n); i += 6) {
if (n % i == 0 || n % (i + 2) == 0)
return false;
}
return true;
}
int main() {
int low, high;
cout << "Enter the lower bound: ";
cin >> low;
cout << "Enter the upper bound: ";
cin >> high;
if (low > high) swap(low, high);
cout << "\nPrime numbers between " << low << " and " << high << ":" << endl;
int count = 0;
for (int i = low; i <= high; i++) {
if (isPrime(i)) {
cout << i << " ";
count++;
}
}
if (count == 0)
cout << "None found.";
cout << "\n\nTotal primes found: " << count << endl;
return 0;
}