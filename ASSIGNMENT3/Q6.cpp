// 18_reverse_array.cpp
// Display the elements of an array in reverse order
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
cout << "\nOriginal array : ";
for (int i = 0; i < n; i++) {
cout << arr[i];
if (i < n - 1) cout << ", ";
}
cout << "\nReversed array : ";
for (int i = n - 1; i >= 0; i--) {
cout << arr[i];
if (i > 0) cout << ", ";
}
cout << endl;
return 0;
}