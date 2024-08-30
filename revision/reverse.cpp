// #include <iostream>
// #include<algorithm>
// using namespace std;

// int reverse(int *arr , int n){
//     int s =0;
//     int e = n-1;
//     int temp;

//     while(s<e){
//         temp = arr[s];
//         arr[s] = arr[e];
//         arr[e] = temp;
//         s++;
//         e--;
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     reverse(arr, n);
//     return 0;
// }

// #include <iostream>
// #include<map>
// using namespace std;
// int freqcount(int arr[], int n, int k){
//     map<int,int>mpp;
//     int count =0;

//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         if(it.second > n/k){
//             count++;
//         }
//     }
//     return count;
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
//     int k;
//     cin >>k;

//     int result  = freqcount(arr, n,k);

//     cout << result << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int binarysearch(int arr[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;

//     int mid = (start + (end - start) / 2);

//     while (start <= end)
//     {
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (start + (end - start) / 2);
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;

//     int result = binarysearch(arr, n, key);

//     cout << "result is:" << result << " ";

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int firstocco(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;

//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (key == arr[mid])
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int lastocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;

//     int ans = -1;
//     while (s <= e)
//     {
//         if (key == arr[mid])
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }

//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cin >> key;
//     int result = firstocco(arr, n, key);

//     cout << "result is:" << result;
//     cout << endl;
//     int output = lastocc(arr, n, key);
//     cout << "result is: " << output;

//     return 0;
// }

#include <iostream>
using namespace std;

int peekindex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = peekindex(arr, n);

    cout << "result is:" << result << endl;

    return 0;
}