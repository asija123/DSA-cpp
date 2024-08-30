#include <iostream>
using namespace std;

int maxsubaaraysum(int *arr, int n){

    int sum = 0;
    int maxi  = arr[0];

    for(int i=0;i<n;i++){

        // step1 : calculate the sum

        sum = sum + arr[i];

        // step2: update the maxi
        maxi = max(maxi , sum);

        // step3: if sum < 0 then update sum with 0
        if (sum < 0){
            sum =0;
        }
    }
    return maxi;

}

int main()
{
    int n;
    cout << "Enter your size ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int result  = maxsubaaraysum(arr, n);

    cout << result;
    return 0;
}