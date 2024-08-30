#include <iostream>
using namespace std;

int arrsum(int arr[] , int n){

    int sum =0;

    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    
    // sum = arr[0] + arr[1];
    // one way is this 
    // int ans  = arr[n-1] + arrsum(arr , n-1);

    // another way is this we can also write 
    int remaningpart  = arrsum(arr+1 , n-1);
    sum = arr[0] + remaningpart;

    return sum;

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

    int result = arrsum(arr , n);

    cout << result;

    return 0;
}