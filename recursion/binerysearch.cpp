#include <iostream>
using namespace std;

bool binarysearch(int arr[] , int s, int e , int k){

    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid]<k){
        return binarysearch(arr, mid+1, e, k);
    }
    else{
        return binarysearch(arr , s , mid-1 , k); 
    }
}

int main()
{
    int n;
    cout << "Enter your number ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter your element to seach ";
    cin >> k;
    int s = 0;
    int e = n-1;

    bool ans = binarysearch(arr, s, e ,k);

    if(ans){
        cout << "found" << endl;
    }   
    else{
        cout << "Not found" << endl;
    }
    return 0;
}