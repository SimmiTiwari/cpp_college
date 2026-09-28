#include <iostream>
using namespace std;

int main() {

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int rows = 2;
    int cols = 3;

    int result[3][2];

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            result[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose Matrix:" << endl;

    for (int i = 0; i < cols; i++) {

        for (int j = 0; j < rows; j++) {

            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}