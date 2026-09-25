#include <iostream>
using namespace std;

int main(){
    int arr[] = {7,1,5,3,6,4};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int maxProfit = 0;
    int bestbuy = arr[0];
    for(int i  =1 ; i<n ;i++){
        if(arr[i]>bestbuy){
              maxProfit = max(maxProfit , arr[i]-bestbuy);
            }
            bestbuy = min(bestbuy , arr[i]);
   


    }
    cout << maxProfit << endl;

}