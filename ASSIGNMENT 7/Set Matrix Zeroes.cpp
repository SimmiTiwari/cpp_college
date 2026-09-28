#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    int rows = 3;
    int cols = 3;

    // Store which rows and columns contain 0
    bool rowZero[3] = {false};
    bool colZero[3] = {false};

    // Step 1: Find zeros
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }

    // Step 2: Make required cells zero
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            if (rowZero[i] || colZero[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    // Print matrix
    cout << "Output:\n";

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}