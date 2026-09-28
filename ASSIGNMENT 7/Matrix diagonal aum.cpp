#include <iostream>
using namespace std;

int main() {

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;
    int sum = 0;

    for (int i = 0; i < n; i++) {

        sum += matrix[i][i];
        sum += matrix[i][n - 1 - i];
    }
    // If n is odd, center element was counted twice
    if (n % 2 == 1) {
        sum -= matrix[n / 2][n / 2];
    }
    cout << "Diagonal Sum: " << sum;

    return 0;
}