#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string str = "India";
    int countCaps = 0;
    
    for(char ch : str){  // First count uppercase letters
        if(isupper(ch)){
            countCaps++;

        }
    }
    if(countCaps==0 || countCaps ==str.length()||( countCaps ==1 && isupper(str[0]))){
            cout<<"true" ;
        }
    else{
              cout<<"false";
        }
    
    
    return  0;

};