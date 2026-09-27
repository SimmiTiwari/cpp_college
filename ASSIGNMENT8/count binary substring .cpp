#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "00110011" ;
    int prev = 0;
    int curr =1;
    int ans=0;
    for(int i =1;i<s.length();i++){
        if(s[i]==s[i-1]){
            curr++;
        }
        else{
            ans = ans + min(prev ,curr);
            prev =  curr;
            curr =1;
        }
    }ans =ans+min(prev ,curr);
    cout<< ans ;

    return 0;


}