#include <iostream>
using namespace std;

int main() {

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };

    int rows = 3;
    int cols = 4;

    bool isToeplitz = true;

    for (int i = 1; i < rows; i++) {

        for (int j = 1; j < cols; j++) {

            if (matrix[i][j] != matrix[i - 1][j - 1]) {
                isToeplitz = false;
                break;
            }
        }

        if (!isToeplitz)
            break;
    }

    if (isToeplitz)
        cout << "True";
    else
        cout << "False";

    return 0;
}