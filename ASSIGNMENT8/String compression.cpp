#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "aabbccc";

    string result = "";

    int i = 0;

    while (i < s.length()) {

        char ch = s[i];
        int count = 0;

        while (i < s.length() && s[i] == ch) {
            count++;
            i++;
        }

        result += ch;

        if (count > 1) {
            result += to_string(count);
        }
    }

    cout << result;

    return 0;
}