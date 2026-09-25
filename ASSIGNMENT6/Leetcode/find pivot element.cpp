#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    int cs =0; //cumalative sum 
    for(int i =0; i<n ; i++){
        int ls  = cs; //left sum
        int rs = sum - cs - arr[i]; //right sum
        if(ls == rs){
            cout<<i<<endl;
           return 0 ;
        }
        cs = cs + arr[i]; //warna add kro cumalative sum me 
    }
    return -1;
}