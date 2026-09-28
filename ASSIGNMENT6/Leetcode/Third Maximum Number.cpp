#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {3, 2, 1};
    int n = 3;

    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] == first || arr[i] == second || arr[i] == third) {
            continue;
        }
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second) {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third) {
            third = arr[i];
        }
    }
    if (third == LLONG_MIN)
        cout << "Maximum Element: " << first;
    else
        cout << "Third Maximum: " << third;

    return 0;
}