// 22_left_rotation.cpp
// Perform a left rotation of an array by one position
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
int first = arr[0];
for (int i = 0; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
arr[n - 1] = first;
cout << "\nAfter left rotation : ";
for (int i = 0; i < n; i++) {
cout << arr[i];
if (i < n - 1) cout << ", ";
}
cout << endl;
return 0;
}
