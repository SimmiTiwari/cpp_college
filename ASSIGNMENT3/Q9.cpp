// 21_remove_duplicates.cpp
// Remove duplicate elements from an array and display only unique elements
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
int unique[n];
int uniqueCount = 0;
for (int i = 0; i < n; i++) {
bool isDuplicate = false;
for (int j = 0; j < uniqueCount; j++) {
if (arr[i] == unique[j]) {
isDuplicate = true;
break;
}
}
if (!isDuplicate) {
unique[uniqueCount++] = arr[i];
}
}
cout << "\nOriginal array : ";
for (int i = 0; i < n; i++) {
cout << arr[i];
if (i < n - 1) cout << ", ";
}
cout << "\nUnique elements : ";
for (int i = 0; i < uniqueCount; i++) {
cout << unique[i];
if (i < uniqueCount - 1) cout << ", ";
}
cout << endl;
return 0;
}