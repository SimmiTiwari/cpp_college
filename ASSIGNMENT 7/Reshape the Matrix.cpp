#include <iostream>
using namespace std;

int main() {

    int mat[2][2] = {
        {1, 2},
        {3, 4}
    };
    int m = 2;
    int n = 2;
    int r = 1;
    int c = 4;
    int result[1][4];
    // Total elements must be same
    if (m * n != r * c) {
        cout << "Original Matrix";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
    int index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            result[0][index] = mat[i][j];
            index++;
        }
    }
    cout << "Reshaped Matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}