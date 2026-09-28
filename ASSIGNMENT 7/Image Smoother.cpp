#include <iostream>
using namespace std;

int main() {

    int image[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    int result[3][3];

    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            int sum = 0;
            int count = 0;

            // Check 3 x 3 area around current cell
            for (int r = i - 1; r <= i + 1; r++) {

                for (int c = j - 1; c <= j + 1; c++) {

                    // Check boundary
                    if (r >= 0 && r < rows &&
                        c >= 0 && c < cols) {

                        sum += image[r][c];
                        count++;
                    }
                }
            }

            result[i][j] = sum / count;
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