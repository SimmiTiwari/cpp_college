#include <iostream>
#include <string>
using namespace std;

int main() {

    string haystack = "sadbutsad";
    string needle = "sad";

    int answer = -1;

    for (int i = 0; i <= haystack.length() - needle.length(); i++) {

        int j = 0;

        while (j < needle.length() && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == needle.length()) {
            answer = i;
            break;
        }
    }

    cout << answer;

    return 0;
}