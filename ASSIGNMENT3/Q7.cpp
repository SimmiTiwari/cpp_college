// 19_bubble_sort.cpp
// Sort the elements of an array in ascending order using Bubble Sort
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
// Bubble Sort
for (int i = 0; i < n - 1; i++) {
bool swapped = false;
for (int j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
swapped = true;
}
}
// If no swaps occurred, array is already sorted
if (!swapped) break;
}
cout << "\nSorted array (Ascending): ";
for (int i = 0; i < n; i++) {
cout << arr[i];
if (i < n - 1) cout << ", ";
}
cout << endl;
return 0;
}