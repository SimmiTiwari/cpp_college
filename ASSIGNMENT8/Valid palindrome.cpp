#include <iostream>
#include <string> 
#include <cctype>
using namespace std;
int main(){
    string s  = "A man, a plan, a canal: Panama"; //2 pointer approach
    int start =0;
    int end = s.length();
    while(start < end){
        if(!isalnum(s[start])){ //not alphanumeric so skip 
            start++ ;
            continue ;
        }
        if(!isalnum(s[end])){
            end-- ;
            continue ; 
        }
        // Compare characters lower krke small letter 
        if (tolower(s[start]) != tolower(s[end])) {
            cout << "Not Palindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"Palindrome";
    return 0 ;
}