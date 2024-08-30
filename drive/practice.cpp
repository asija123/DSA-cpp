// #include <iostream>
// #include<vector>
// using namespace std;

// vector<int> sorting(vector<int> &arr , int n){
//     vector<int>result;
//     for(int i=0;i<n;i++){
//         if(arr[i]<arr[i+1]){
//             swap(arr[i],arr[i+1]);
//             result.push_back(arr[i]);
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the size " << ;
//     cin >> n;

//     vector<int>arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int subarray(int arr[], int n){
//      int sum =0;
//     int maxi = 0;

//     for(int i=0;i<n;i++){
//         sum += arr[i];
//         maxi = max(maxi, sum);

//         if(sum<0){
//             sum = 0;
//         }
//     }
//     return maxi;
// }

// int main()
// {
//     int n;
//     cout << "Enter your Size ";
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
    
//     int ans = subarray(arr,n);
//     cout << ans;

//     return 0;
// }
// #include <iostream>
// #include<algorithm>
// #include<string>
// #include<vector>
// // #include<set>
// using namespace std;

// string name(string str){

//     sort(str.begin(), str.end());
//     string ans;

//     for(int i=0;i<str.length();i++){
//         if(str[i] != str[i+1]){
//             ans +=str[i];
//         }
//     }
//     return ans;
    
// }
// int main()
// {
//     string str;
//     cout << "Enter your string ";
//     getline(cin,str);

//     string result = name(str);
//     cout << result << endl;

//     return 0;
// }

// #include <iostream>
// // #include<vector>
// using namespace std;

// void rotatearr(int arr[] , int n, int k){
//     // vector<int>ans;
//     k = k%n;


//    for(int i=0;i<n;i++){
//     if(i<k){
//         cout << arr[n+i-k] << " ";
//     }
//     else{
//         cout << arr[i-k] << " ";
//     }
//    }
// }

// int main()
// {
//     int n;
//     cout << "Enter your size ";
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//          cin >> arr[i];
//     }
//     int k;
//     cin >> k;
//     rotatearr(arr,n);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "Enter your string ";
//     getline(cin ,str);
//     string ans;
//     for(int i=0;i<str.length();i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             ans +=str[i];
//         }
//     }
//     cout << ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int lowerbound(int arr[], int n ,int v){
//     int s = 0;
//     int e = n-1;
//     int a = -1;

//     while(s<=e){
//     int mid = (s + (e-s)/2);

//         if(arr[mid] > v){
//             e = mid-1;
//         }
//         else{
//             a = arr[mid];
//             s = mid+1;
//         }
        
//     }
//     return a;

// }

// int main()
// {
//     int n;
//     cout << "Enter your size ";
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int v;
//     cin >> v;

//     int result = lowerbound(arr , n, v);

//     cout << result;
//     return 0;
// }

//  #include <iostream>
// using namespace std;
// int lowerbound(int *arr, int n, int val){
//     int s=0;
//     int e = n-1;
//     int a = -1;
//     while(s<=e){
//     int mid = (s+(e-s)/2);
//         if(arr[mid]> val){
//             e = mid-1;
//         }
//         else{
//             a = arr[mid];
//             s = mid+1;
//         }
//     }
//     return a;
    
// }
// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int val;
//     cin >> val;
//     int result = lowerbound(arr, n,val);    
//     if(result != -1){
//         cout << result;
//     }
//     else{
//         cout << "element not found";
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

bool palidrome(string str){

    int s = 0;
    int e = str.length()-1;

    while(s<=e){
        if(str[s++] != str[e--]){
            return false;
        }
    }
    return true;

}

int main()
{
    string str;
    cout << "Enter your string ";
    getline(cin,str);

    bool ans = palidrome(str);

    if(ans){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}