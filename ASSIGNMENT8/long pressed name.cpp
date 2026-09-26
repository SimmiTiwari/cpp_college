#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "alex";
    string typed = "aaleex";
    int i =0 ;
    int j = 0;
    while(j<typed.length()){
           
       if (i < name.length() && name[i] == typed[j]){ //same match letters
              i++;
              j++;
        }
        else if(j>0 && typed[j]==typed[j-1]){ //long pressed logic consective hoo tabhi j-1
            j++;
        }
        else{
           cout<<false;
           return 0;
        }
    }
    if (i == name.length()) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
           
}


