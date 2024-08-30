#include <iostream>
using namespace std;

bool found(int arr[] , int n , int k){

    if(n==0){
        return false;
    }
    // no need to write this part if we write then also no problem
    // if(n==1 && arr[0] == k){
    //     return true;
    // }

    if(arr[0] == k){
        return true;
    }

    bool ans  = found(arr+1 , n-1 , k);
    return ans;
    
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

    bool result  = found(arr, n, k);

    if(result){
        cout << "Element is found" << endl;
    }
    else{
        cout << "Element is not found";
    }

    return 0;
}