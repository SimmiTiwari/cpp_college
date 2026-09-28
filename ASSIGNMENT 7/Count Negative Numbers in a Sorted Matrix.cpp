#include <iostream>
using namespace std;

int main() {

    int matrix[4][4] = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}
    };

    int rows = 4;
    int cols = 4;

    int row = rows - 1;
    int col = 0;

    int count = 0;

    while (row >= 0 && col < cols) {

        if (matrix[row][col] < 0) {

            // Current and all elements to the right are negative
            count += cols - col;

            row--;
        }
        else {

            // Move right
            col++;
        }
    }

    cout << "Negative numbers = " << count;

    return 0;
}