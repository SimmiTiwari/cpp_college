// 16_even_odd_count.cpp
// Count the number of even and odd elements in an array
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
int evenCount = 0, oddCount = 0;
for (int i = 0; i < n; i++) {
if (arr[i] % 2 == 0)
evenCount++;
else
oddCount++;
}
cout << "\nCount of Even elements : " << evenCount << endl;
cout << "Count of Odd elements : " << oddCount << endl;
return 0;
}