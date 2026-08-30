// 13_array_input_display.cpp
// Accept integers from the user and display all elements of the array
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
cout << "\nArray elements: ";
for (int i = 0; i < n; i++) {
cout << arr[i];
if (i < n - 1) cout << ", ";
}
cout << endl;
return 0;
}