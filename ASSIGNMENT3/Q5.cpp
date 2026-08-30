// 17_linear_search.cpp
// Search for a given element using Linear Search and display its position
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
int key;
cout << "\nEnter the element to search: ";
cin >> key;
bool found = false;
for (int i = 0; i < n; i++) {
if (arr[i] == key) {
cout << "Element " << key << " found at position " << (i + 1) << "

(index " << i << ")." << endl;
found = true;
}
}
if (!found)
cout << "Element " << key << " not found in the array." << endl;
return 0;
}