#include <iostream>
using namespace std;
int main(){
    string s = " how are you";
    int  start = 0;
    for(int i =0;i<s.size();i++){
        if(i==s.size()|| s[i]==' '){
            int left = start;
            int right = i-1;
            while(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
            start = i+1;

        }

    }cout<<s<<endl;

}