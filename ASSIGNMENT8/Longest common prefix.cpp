#include <iostream>
#include <string>
using namespace std;

int main() {

    string strs[] = {"flower", "flow", "flight"};
    int n = 3;

    int prefixLength = strs[0].length();

    for (int i = 0; i < strs[0].length(); i++) {

        char ch = strs[0][i];

        for (int j = 1; j < n; j++) {

            if (i >= strs[j].length() || strs[j][i] != ch) {
                prefixLength = i;
                break;
            }
        }

        if (prefixLength == i)
            break;
    }

    cout << strs[0].substr(0, prefixLength);

    return 0;
}
