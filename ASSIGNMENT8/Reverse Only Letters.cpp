#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "ab-cd";
    // string s2 = "a-bC-dEf-ghIj" ;
    // string s3 = "Test1ng-Leet=code-Q!" ;
    int left = 0;
    int right = s.length() -1;
    while(left<right){
        if(!isalpha(s[left])){
             left++;
        }
        if(!isalpha(s[right])){
            right--;
        }
        else{
            swap(s[left] , s[right]);
            left++;
            right--;
        }
    }
    cout<<s ;
    return 0 ;
}