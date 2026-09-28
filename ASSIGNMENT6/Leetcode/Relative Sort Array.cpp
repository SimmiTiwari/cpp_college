#include <iostream>
using namespace std;

int main() {

    int arr1[] = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    int arr2[] = {2, 1, 4, 3, 9, 6};
    int n1 = 11;
    int n2 = 6;
    int freq[1001] = {0};
    for (int i = 0; i < n1; i++) {
        freq[arr1[i]]++;
    }
    int pos = 0;
    for (int i = 0; i < n2; i++) {
        int value = arr2[i];
        while (freq[value] > 0) {
            arr1[pos] = value;
            pos++;
            freq[value]--;
        }
    }
    for (int i = 0; i <= 1000; i++) {

        while (freq[i] > 0) {
            arr1[pos] = i;
            pos++;
            freq[i]--;
        }
    }
    cout << "Output: ";

    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}