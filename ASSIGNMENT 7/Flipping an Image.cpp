#include <iostream>
using namespace std;

int main() {

    int image[3][3] = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    int n = 3;

    for (int i = 0; i < n; i++) {

        int left = 0;
        int right = n - 1;

        while (left <= right) {

            // Reverse + Flip
            image[i][left] = 1 - image[i][left];
            image[i][right] = 1 - image[i][right];

            swap(image[i][left], image[i][right]);

            left++;
            right--;
        }
    }

    cout << "Output:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}