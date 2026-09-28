#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "ab#c";
    string t = "ad#c";
    int i = s.length() - 1;
    int j = t.length() - 1;
    bool same = true;
    while (i >= 0 || j >= 0) {
        int skipS = 0;
        while (i >= 0) {
            if (s[i] == '#') {
                skipS++;
                i--;
            }
            else if (skipS > 0) {
                skipS--;
                i--;
            }
            else {
                break;
            }
        }
        int skipT = 0;
        while (j >= 0) {
            if (t[j] == '#') {
                skipT++;
                j--;
            }
            else if (skipT > 0) {
                skipT--;
                j--;
            }
            else {
                break;
            }
        }
        if (i >= 0 && j >= 0 && s[i] != t[j]) {
            same = false;
            break;
        }
        if ((i >= 0) != (j >= 0)) {
            same = false;
            break;
        }
        i--;
        j--;
    }
    cout << boolalpha << same;

    return 0;
}