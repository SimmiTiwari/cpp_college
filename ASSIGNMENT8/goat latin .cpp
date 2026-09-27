#include <iostream>
using namespace std;
#include  <string>
#include <sstream>
int main(){
     string sentence = "I speak Goat Latin";
     stringstream ss(sentence);
        string word;
        string result;
        int index =1;
        while(ss>>word){
            if(word[0] =='a' || word[0] =='e'||word[0] =='i'||word[0] =='o'||word[0] =='u'||word[0] =='A' ||word[0] =='E' ||word[0] =='I' ||word[0] =='O' ||word[0] =='U'){
                word.append("ma");

            }else{
                word = word.substr(1) + word[0] + "ma";
            }
            word.append(string(index,'a'));
            if(index>1){
                result.append(" ");
                
            }
             result.append(word);
            index++;

        }
        cout<<result;
        return 0 ;
}