// #include <iostream>
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
string duplicate(string str)
{
    string output;
    sort(str.begin(), str.end());

    for(int i=0;i<str.length();i++){
        while(str[i] == str[i+1]){
            i++;
        }
        output = output+str[i];
    }
    return output;
}
int main()
{
    string str;
    cin >> str;

    cout << duplicate(str) << endl;
    
    return 0;
}