#include <iostream>
using namespace std;

int partition(int arr[] , int s, int e){
    int pivot = arr[s];
    int cnt =0;

    for(int i= s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    int pivotindex = s+cnt;

    swap(arr[pivotindex] , arr[s]);

    int i=s ,j=e;

    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivotindex;
}


void quicksort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr, s,e);

    quicksort(arr, s,p-1);

    quicksort(arr, p+1,e);
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

    quicksort(arr, 0, n);

    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}