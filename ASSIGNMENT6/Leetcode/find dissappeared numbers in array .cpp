#include <iostream>
using namespace std;
int main() {
    int n = 8;
    int arr[] = {4,3,2,7,8,2,3,1};

    // Marking the presence of numbers
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1; // Get the index corresponding to the value
        if (arr[index] > 0) {
            arr[index] = -arr[index]; // Mark as negative to indicate presence
        }
    }

    cout << "Disappeared numbers: ";

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) { // If the value is positive, the number (i+1) is missing
            cout << (i + 1) << " ";
        }
    }

    return 0;
}