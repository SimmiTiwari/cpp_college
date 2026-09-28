#include <iostream>
using namespace std;

int main() {

    int arr[] = {-7, -3, 2, 3, 11};
    int n = 5;
    int result[5];
    int left = 0;
    int right = n - 1;
    int pos = n - 1;
    while (left <= right) {
        if (abs(arr[left]) > abs(arr[right])) {
            result[pos] = arr[left] * arr[left];
            left++;
        }
        else {
            result[pos] = arr[right] * arr[right];
            right--;
        }

        pos--;
    }
    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}