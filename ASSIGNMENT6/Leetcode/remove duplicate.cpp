#include <iostream>
using namespace std;


int main(){
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int i = 0;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n;j++){
        if(arr[j]!= arr[i]){ //remove duplicate elements ka logic h 
            arr[i+1] = arr[j];
             i++;
           
           
         
        }
    }
    for(int k = 0; k <= i; k++) {    //index 0 se index 4 tak print karna hai.
        cout << arr[k];
    }
    return 0;
};