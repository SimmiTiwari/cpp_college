#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;

    // Step 1: Transpose
    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse every row
    for (int i = 0; i < n; i++) {

        int left = 0;
        int right = n - 1;

        while (left < right) {

            swap(matrix[i][left], matrix[i][right]);

            left++;
            right--;
        }
    }

    // Print rotated matrix
    cout << "Rotated Matrix:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}