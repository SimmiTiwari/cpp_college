#include <iostream>
using namespace std;

int main() {

    int arr[] = {12, 345, 2, 6, 7896};
    int n = 5;

    int count = 0;

    for (int i = 0; i < n; i++) {

        int number = arr[i];
        int digits = 0;

        while (number > 0) {
            number = number / 10;
            digits++;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    cout << "Answer: " << count;

    return 0;
}