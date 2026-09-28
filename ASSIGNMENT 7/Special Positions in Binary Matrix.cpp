#include <iostream>
using namespace std;

int main() {

    int matrix[3][3] = {
        {1, 0, 0},
        {0, 0, 1},
        {0, 0, 0}
    };

    int rows = 3;
    int cols = 3;

    int count = 0;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            // Check if current element is 1
            if (matrix[i][j] == 1) {

                bool rowOK = true;
                bool colOK = true;

                // Check complete row
                for (int k = 0; k < cols; k++) {
                    if (k != j && matrix[i][k] == 1) {
                        rowOK = false;
                        break;
                    }
                }

                // Check complete column
                for (int k = 0; k < rows; k++) {
                    if (k != i && matrix[k][j] == 1) {
                        colOK = false;
                        break;
                    }
                }

                // Both row and column must be valid
                if (rowOK && colOK) {
                    count++;
                }
            }
        }
    }

    cout << "Special positions = " << count;

    return 0;
}