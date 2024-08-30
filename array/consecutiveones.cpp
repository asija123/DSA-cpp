#include<iostream>
using namespace std;
int findcon(int arr[], int n){
    int count =0;
    int max_count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else{
        count = 0;
        }
    }
    max_count = max(max_count, count);
    return max_count;
}

int main(){
    int n;
    cout <<  "enter the size ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int result = findcon(arr,n);

    cout << result;

}