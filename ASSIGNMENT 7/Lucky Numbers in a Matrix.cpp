#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}
    };

    int rows = 3;
    int cols = 3;

    cout << "Lucky Numbers: ";

    for (int i = 0; i < rows; i++) {

        int rowMin = matrix[i][0];

        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
            }
        }
        bool lucky = true;

        for (int j = 0; j < rows; j++) {
            if (matrix[j][0] == rowMin) {
            }
        }
        int col = 0;

        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == rowMin) {
                col = j;
                break;
            }
        }
        for (int j = 0; j < rows; j++) {
            if (matrix[j][col] > rowMin) {
                lucky = false;
                break;
            }
        }
        if (lucky) {
            cout << rowMin << " ";
        }
    }
    return 0;
}