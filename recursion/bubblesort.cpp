#include <iostream>
using namespace std;

void bubblesort(int* arr ,int n){

    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    bubblesort(arr , n-1);
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
    
    bubblesort(arr, n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}