// #include <iostream>
// using namespace std;

// int factorail(int n){

//     if(n==0){
//         return 1;
//     }

//     return n * factorail(n-1);
// }

// int main()
// {
//     int n;
//     cout << "Enter your number ";
//     cin >> n;
//      cout << factorail(n) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void num(int n){

//     if(n==0){
//         return;
//     }
//     num(n-1);
//     cout << n << endl;


// }
// int main()
// {
//     int n;
//     cout <<"Enter your number ";
//     cin>>n;

//     num(n);
//     return 0;
// }

#include <iostream>
using namespace std;

bool sorted(int arr[], int n){

    if(n==1 || n==0){
        return true;
    }
    if(arr[0] >= arr[1]){
        return false;
    }
    sorted(arr+1 ,n-1);
    
}

int main()
{
    int n;
    cout <<"Enter ypur number ";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

bool result = sorted(arr,n);
if(result){
    cout << "Array is sorted";
}
else{
    cout << "Array is not sorted";
}
    return 0;
}   