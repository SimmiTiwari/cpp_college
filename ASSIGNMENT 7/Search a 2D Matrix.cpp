#include <iostream>
using namespace std;

int main() {

    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int rows = 3;
    int cols = 4;

    int target = 16;

    int left = 0;
    int right = rows * cols - 1;

    bool found = false;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        // Convert 1D index to 2D
        int row = mid / cols;
        int col = mid % cols;

        if (matrix[row][col] == target) {
            found = true;
            break;
        }
        else if (matrix[row][col] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (found)
        cout << "True";
    else
        cout << "False";

    return 0;
}