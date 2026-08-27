// 06_sum_of_n_naturals.cpp
// Sum of First N Natural Numbers
#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter the value of N: ";
cin >> n;
if (n < 0) {
cout << "Please enter a positive integer." << endl;
return 1;
}
long long sum = 0;
for (int i = 1; i <= n; i++) {
sum += i;
}
cout << "Sum of first " << n << " natural numbers = " << sum << endl;
cout << "(Using formula: " << n << " * " << (n + 1) << " / 2 = " << (long long)n * (n + 1) / 2 << ")" <<
endl;

return 0;
}