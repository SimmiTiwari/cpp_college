#include <iostream>
using namespace std;

int main() {

    int grid[2][3] = {
        {1, 2, 3},
        {4, 5, 1}
    };

    int rows = 2;
    int cols = 3;

    int top = 0;
    int front = 0;
    int side = 0;

    // Top view + Front view
    for (int i = 0; i < rows; i++) {

        int rowMax = 0;

        for (int j = 0; j < cols; j++) {

            // Top view
            if (grid[i][j] > 0) {
                top++;
            }

            // Find maximum in current row
            rowMax = max(rowMax, grid[i][j]);
        }

        front += rowMax;
    }

    // Side view
    for (int j = 0; j < cols; j++) {

        int colMax = 0;

        for (int i = 0; i < rows; i++) {

            colMax = max(colMax, grid[i][j]);
        }

        side += colMax;
    }

    int totalArea = top + front + side;

    cout << "Projection Area = " << totalArea;

    return 0;
}