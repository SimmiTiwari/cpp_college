#include <iostream>
using namespace std;

int main() {

    int heights[] = {1, 1, 4, 2, 1, 3};
    int n = 6;

    int freq[101] = {0};

    // Count each height
    for (int i = 0; i < n; i++) {
        freq[heights[i]]++;
    }

    int expected = 1;
    int count = 0;

    for (int i = 0; i < n; i++) {

        // Find the next height
        while (freq[expected] == 0) {
            expected++;
        }

        // Compare actual and expected
        if (heights[i] != expected) {
            count++;
        }

        freq[expected]--;
    }

    cout << count;

    return 0;
}