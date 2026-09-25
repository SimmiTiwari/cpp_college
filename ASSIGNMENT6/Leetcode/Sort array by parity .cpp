#include <iostream>
using namespace std;
int main(){
    int arr[] = {3,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even = 0;
    for (int i =0;i<n;i++){
        if(arr[i]%2==0){
            swap(arr[i] , arr[even]);
            even++;
        }  
    }
    for(int i = 0; i < n; i++) {  // to print the finall  array
        cout << arr[i] << " ";
    }

    return 0;
       
 }
    