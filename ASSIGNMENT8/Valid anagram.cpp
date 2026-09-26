#include <iostream>
using namespace std;
int main(){
    string s = "anagram";
    string t = "nagaram";
    bool result = true;
    if(s.size()!=t.size()){
        cout << "Not Anagram";
        return 0;
    }
           
    int freq[26] = {0};
    for(int i =0;i<s.size();i++){
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;

    }
    for(int i =0;i<26;i++){
         if(freq[i]!=0){
            cout << "Not Anagram";
            return 0;
        }
            
    }
    cout << "True it is Anagram";
     return 0;
}
