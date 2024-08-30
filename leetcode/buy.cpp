#include <iostream>
// #include<vector>
using namespace std;

 int maxProfit(int arr[] , int n) {
    int x =0;
    for(int i=0;i<n;i++){
        for(int j= i+1; j<n;j++){
            int result = arr[j] - arr[i];
            x = max(x,result);
        }
    }
    return x;
        // int left = prices[0];
        // int right = prices[1];
        // int maxp =0;
        // int profit =0;
        // while(right < prices.length()){
        //     if(prices[left] < prices[right]){
        //         profit  = prices[right] - prices[left];
        //         maxp = max(maxp, profit);
        //     }
        //     else{
        //         left = right;
        //         right++;
        //     }
        // }
        // return maxp;
        
    }
int main()
{

    int n;
    cout << "Enter the size ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int result = maxProfit(arr , n);

    cout  << result;

    
    return 0;
}