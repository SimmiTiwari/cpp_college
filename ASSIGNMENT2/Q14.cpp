// 14_neon_numbers.cpp
// Find all Neon Numbers in a Given Range
#include <iostream>
using namespace std;
int sumOfDigits(long long n) {
int sum = 0;
while (n != 0) {
sum += n % 10;
n /= 10;
}
return sum;
}
bool isNeon(int n) {
long long square = (long long)n * n;
return sumOfDigits(square) == n;
}

int main() {
int low, high;
cout << "Enter the lower bound: ";
cin >> low;

cout << "Enter the upper bound: ";
cin >> high;
if (low > high) swap(low, high);
cout << "\nNeon numbers between " << low << " and " << high << ":" << endl;
int count = 0;
for (int i = low; i <= high; i++) {
if (isNeon(i)) {
long long sq = (long long)i * i;
cout << i << " (square = " << sq
<< ", sum of digits = " << sumOfDigits(sq) << ")" << endl;
count++;
}
}
if (count == 0)
cout << "No Neon numbers found in this range." << endl;
else
cout << "\nTotal Neon numbers found: " << count << endl;
return 0;
}