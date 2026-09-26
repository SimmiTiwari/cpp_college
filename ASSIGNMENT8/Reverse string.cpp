

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "hello";

//     int left = 0;
//     int right = s.size() - 1;

//     while(left < right) {

//         swap(s[left], s[right]);

//         left++;
//         right--;
//     }

//     cout << s;

//     return 0;
// }


#include <iostream>
using namespace std;
int main(){
    char str[] = {'h', 'e', 'l', 'l', 'o'};
    int left = 0;
    int right = strlen(str) - 1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    for(int i = 0; i < strlen(str); i++){
        cout << str[i];
    }
    cout << endl;
    return 0;
}


