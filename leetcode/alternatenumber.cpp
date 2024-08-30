#include <iostream>
#include<vector>
using namespace std;

int rearange(int arr[] , int n){
    vector<int>positive;
    vector<int>negative;
    vector<int>result;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive.push_back(arr[i]);
        }
        else{
            negative.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(i%2 != 0){
            result.push_back(negative[i]);
        }
        else{
            result.push_back(positive[i]);
        }
    }
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter the size ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // cout << rearange(arr, n) << " ";
    rearange(arr,n);

    return 0;
}