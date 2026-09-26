#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "egg";
    string t = "add";

    bool result = true;

    // Length check
    if (s.size() != t.size()) {
        result = false;
    }
    else {

        // Two arrays for mapping in both directions
        int map1[256] = {0};
        int map2[256] = {0};

        for (int i = 0; i < s.size(); i++) {

            // Check whether the previous pattern is same
            if (map1[s[i]] != map2[t[i]]) {
                result = false;
                break;
            }

            // Store the position
            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
    }

    cout << boolalpha << result; // boolalpha for value true and false not 0 and 1

    return 0;
}