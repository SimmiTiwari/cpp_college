#include <iostream>
using namespace std;

int main() {

    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;
    int k = 1;

    // Total number of elements
    int total = rows * cols;

    // If k is greater than total elements
    k = k % total;

    int result[3][3];

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            // Convert 2D position into 1D position
            int oldIndex = i * cols + j;

            // New position after shifting
            int newIndex = (oldIndex + k) % total;

            // Convert back to 2D
            int newRow = newIndex / cols;
            int newCol = newIndex % cols;

            result[newRow][newCol] = grid[i][j];
        }
    }

    cout << "Output:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}