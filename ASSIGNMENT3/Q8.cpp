// 20_merge_arrays.cpp
// Merge two arrays into a third array and display the merged array
#include <iostream>
using namespace std;
int main() {
int m, n;
cout << "Enter the number of elements in Array 1: ";
cin >> m;
int arr1[m];
cout << "Enter " << m << " integers for Array 1:\n";
for (int i = 0; i < m; i++) {
cout << "Element [" << i << "]: ";
cin >> arr1[i];
}
cout << "\nEnter the number of elements in Array 2: ";
cin >> n;
int arr2[n];
cout << "Enter " << n << " integers for Array 2:\n";
for (int i = 0; i < n; i++) {
cout << "Element [" << i << "]: ";
cin >> arr2[i];
}
int merged[m + n];
// Copy first array
for (int i = 0; i < m; i++)
merged[i] = arr1[i];
// Copy second array
for (int i = 0; i < n; i++)
merged[m + i] = arr2[i];
cout << "\nMerged array: ";
for (int i = 0; i < m + n; i++) {
cout << merged[i];
if (i < m + n - 1) cout << ", ";
}
cout << endl;
return 0;
}