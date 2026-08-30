// 15_sum_average.cpp
// Calculate the sum and average of all elements in an array
#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter the number of elements: ";
cin >> n;
int arr[n];
cout << "Enter " << n << " integers:\n";
for (int i = 0; i < n; i++) {
cout << "Element [" << i << "]: ";
cin >> arr[i];
}
int sum = 0;
for (int i = 0; i < n; i++) {
sum += arr[i];
}
double average = (double)sum / n;
cout << "\nSum : " << sum << endl;
cout << "Average : " << average << endl;
return 0;
}