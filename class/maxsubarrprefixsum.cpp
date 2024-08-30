#include <iostream>
using namespace std;
void subarray(int *arr, int n){
    int crr = 0;
    int sum =0;
    for(int i=0;i<n;i++){
        crr = crr +arr[i];
        if(crr<0){
            crr = 0;
        }
        sum = max(sum, crr);
    }
    cout << sum;
}
int main()
{
    int n;
    cout << "enter size :" <<endl; 
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "sum is: ";
    subarray(arr, n);
    return 0;
}