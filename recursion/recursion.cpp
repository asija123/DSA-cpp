// #include<iostream>
// using namespace std;

//     int power(int n){
//         if(n==0)
//         return 1;

//         return 2*power(n-1);
//     }
//     int main(){

//         int n;
//         cin >> n;
//         int ans = power(n);

//         cout << ans << endl;
//     }

// #include<iostream>
// using namespace std;

// void counting(int n){

//     if(n==0){
//         return;
//     }

//     cout << n << endl;

//     counting(n-1);   //if we use this line above the 28 line then it will print counting

// }

// int main(){

//     int n;
//     cin >> n;
//     cout << endl;
//     counting(n);

// }

// #include<iostream>
// using namespace std;

// int  fibo(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans = fibo(n-1)+fibo(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin >> n;

//     cout << fibo(n);
// }

// #include<iostream>
// using namespace std;

// void saydigit(int n, string arr[]){

//     if(n==0){
//         return;
//     }

//     int digit = n%10;
//     n = n/10;

//     saydigit(n ,arr);

//     cout << arr[digit] << " ";
// }

// int main(){

//     string arr[10] = {"zero" , "one", "two", "three", "four", 
//                     "five", "six", "seven", "eigth", "nine"};

//         int n;
//         cin >> n;

//     cout << endl;

//     saydigit(n,arr);
//     cout << endl;
// }

// #include<iostream>
// using namespace std;
// bool issorted(int arr[], int n){

//     // base case
//     if(n == 0 || n == 1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else {
//         bool remaingpart = issorted(arr+1 , n-1);
//         return remaingpart;
//     }
// }

// int main(){

//     int n;
//     cout << "Enter the size ";
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     bool ans = issorted(arr,n);

//     if(ans){
//         cout << "array is sorted " << endl;
//     }
//     else {
//         cout << "array is not sorted " << endl; 
//     }
// }

// #include<iostream>
// using namespace std;

// int getsum(int arr[], int n){
//     int sum =0;

//     if(n==0){
//         return 0;
//     }
    // if(n==1){
    //     return arr[0];
    // }

//     int remaininggpart = getsum(arr+1 , n-1);
   
//    sum = arr[0] + remaininggpart;
// int sum = sum +arr[i++];

//    return sum;

// }

// int main(){

//     int n;
//     cout << "Enter the size ";
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//      cout << getsum(arr,n) << endl;

// }

// #include<iostream>
// using namespace std;

// bool linearsearch(int arr[], int n, int k){

//     if(n==0){
//         return 0;
//     }
//     if(*arr == k){
//         cout << *arr;
//         return true;
//     }
//     else {
//         int remaningpart  = linearsearch(arr+1 , n-1,k);
//         return remaningpart;
//     }

// }

// int main(){

//     int n;
//     cout << "Enter the size ";
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//      bool ans = linearsearch(arr,n,k);
//     if(ans){
//         cout << "present";
//     }
//     else {
//         cout << "absent";
//     }

// }

// #include<iostream>
// using namespace std;

// bool binerysearch(int *arr , int s, int e, int k){
//     cout << endl;
    
//     if(s>e){
//         return false;
//     }
//     int mid = s+ (e-s)/2;

//     if(arr[mid] == k){
//         return true;
//     }
//     if(arr[mid] < k){
//         return binerysearch(arr , mid-1, e,k);
//     }
//     else {
//         return binerysearch(arr , s, mid-1, k);
//     }
// }

// int main(){

//     int n;
//     cout << "Enter the size ";
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int k;
//     cout << "Enter the key ";
//     cin >> k;

//     cout << "present or not " << binerysearch(arr , 0, n-1 , k);

// }

// #include<iostream>
// using namespace std;
// void reverse(string& str, int i , int j){

//     if(i>j){
//         return;
//     }
//     swap(str[i] , str[j]);
//     i++;
//     j--;

//     reverse(str , i , j);
// }

// int main(){

//     string name = "lakshay";

//     reverse(name ,0, name.length()-1);

//     cout << name;
// }


// #include<iostream>
// using namespace std;
// bool check(string& str , int i, int j){

//     if(i>j){
//         return true;
//     }
//     if(str[i] !=  str[j]){
//         return false;
//     }
//     else{
//         check(str , i+1 , j-1);
//     }

// }

// int main(){

// string name = "aabb";

// bool ispalidrome = check(name, 0 , name.length()-1);

// if(ispalidrome){
//     cout << "Is a palidrome";
// }
// else{
//     cout << "Not a palidrome";
// }


// }

// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }
//     int ans = power(a,b/2);

//     if(b%2 == 0){
//         return ans*ans;
//     }
//     else{
//         return a *ans *ans;
//     }
// }

// int main(){

//     int a,b;

//     cin >>a >>b;

//     int ans = power(a,b);
//     cout << "ans is " << ans << endl;
// }

// #include<iostream>
// using namespace std;
// void sortarray(int arr[] , int n){
// if(n==0 || n==1){
//     return;
// }
// for(int i=0; i<n-1; i++){
//     if(arr[i]> arr[i+1]){
//         swap(arr[i] , arr[i+1]);
//     }
//     sortarray(arr, n-1);
// }
// }

// int main(){

//     int arr[5] = {1,2,8,0,5};

//     sortarray(arr, 5);
//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }
// }

// merge sort
// #include<iostream>
// using namespace std;
// void mergesort(int *arr, int s, int e){
//     int mid = s+(e-s)/2;

//     int len1 = mid - s+1;
//     int len2 = e- mid;

//     int *first =  new int[len1];
//     int *second = new int[len2];
    
//     int mainindex = s;
//     for(int i=0;i<len1;i++){
//         first[i] = arr[mainindex++];
//     }
//     mainindex = mid+1;
//     for(int i=0;i<len2;i++){
//         second[i] = arr[mainindex++];
//     }

//     int index1 = 0;
//     int index2 = 0;
//     mainindex = s;

//     while(index1<len1 && index2<len2){
//         if(first[index1] < second[index2]){
//         arr[mainindex++] = first[index1++];
//         }
//         else {
//             arr[mainindex++] = second[index2++];
//         }
//     }

//         while(index1<len1){
//             arr[mainindex++] = first[index1++];
//         }
//         while(index2<len2){
//             arr[mainindex++] = second[index2++];
//         }

// }

// void sort(int *arr, int s, int e){

//     if(s>=e){
//         return ;
//     }
//     int mid = s+(e-s)/2;

//     sort(arr , s ,mid);

//     sort(arr, mid+1,e);

//     mergesort(arr,s,e);
// }

// int main(){

//     int n;
//     cout << "Enter the size ";
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     sort(arr,0,n-1);
    
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     // cout << endl;
//     }
// }

// quick sort

// #include<iostream>
// using namespace std;

// int partition(int arr[],int s,int e){
//     int pivot = arr[s];
//     int cnt =0;

//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot){
//             cnt++;
//         }
//     }
//     int pivotindex = s+cnt;
//     swap(arr[pivotindex], arr[s]);

//     int i=s , j=e;
//     while(i<pivotindex && j> pivotindex){
//         while(arr[i]<pivot){
//             i++;
//         }
//         while(j>pivot){
//             j--;
//         }
//         if(i<pivotindex && j>pivotindex){
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pivotindex;

// }
// void quicksort(int arr[], int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p =partition(arr,s,e);

//     quicksort(arr,s,p-1);

//     quicksort(arr,p+1,e);
// }

// int main(){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     quicksort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

// }

// #include<iostream>
// using namespace std;
// void counting(int n){
//     if(n==0){
//         return;
//     }

//     counting(n-1);
//     cout << n << endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     counting(n);
     
// }

// #include<iostream>
// using namespace std;
// void mean(int arr[],int n ,int &sum){
//     if(n<0){
//         return ;
//     }
//         sum = sum+arr[n];
//         mean(arr,n-1,sum);

// }

// int main(){
//     int n;
//     cin >>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int sum  =0;
//     mean(arr,n-1,sum);
//     cout << sum/n;
// }

// #include<iostream>
// using namespace std;
// int  counting(int n ,int &sum){
//     if(n==0){
//         return 0;
//     }
//     sum = sum+n;

//     return counting(n-1,sum);
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum =0;
//     counting(n,sum);
//     cout << sum << endl;
     
// }

// #include<iostream>
// using namespace std;

// void arrsum(int arr[],int n, int &sum){
//     if(n<0){
//         return;
//     }

//     sum = sum+arr[n];
//     arrsum(arr,n-1,sum);
// }

// int main(){

//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int sum =0;
//     arrsum(arr,n-1,sum);
//     cout << sum ;
// }

// #include<iostream>
// using namespace std;
// void rever(string str, int n){

//     if(n<0){
//         return;
//     }
//     cout << str[n] ;
//     rever(str,n-1);
// }
// int main(){

//     string str;
//     // cin >> str;
//     getline(cin,str);

//     int n = str.length();
//     rever(str , n);
// }

// #include<iostream>
// using namespace std;

// void len(string str,int &count , int&i){
//     if(str[i] == '\0'){
//         return;
//     }
//     count++;
//     i++;
//     len(str,count,i);
    
// }
// int main(){
//     string str;
//     getline(cin,str);
//     int count =0;
//     int i =0;

//     len(str,count,i);
//     cout << count;

// }

// #include<iostream>
// using namespace std;

// void numsum(int n ,int digit, int &sum){
//     if(digit==0){
//         return;
//     }
//     digit = n%10;
//     n= n/10;
//     sum = sum +digit;
//     numsum(n,digit,sum);

// }

// int main(){
//     int n;
//     cin >>n;
//     int sum =0;
//     int digit;
//     numsum(n,digit,sum);
//     cout << sum;
// }

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//     return fibonacci(n-1)+fibonacci(n-2);
//     // fibonacci(n,fibo);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     // int fibo;
//     // fibonacci(n);
//     // for(int i=0;i<n;i++){
//     // cout << fibonacci(i) << " ";
//     // }
//     cout << fibonacci(n);
// }

// #include<iostream>
// using namespace std;
// int  factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     int fact = n*factorial(n-1);
//     return fact;
// }

// int main(){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     // factorial(n);
//     cout << factorial(n);

// }

// #include<iostream>
// #include<climits>
// using namespace std;
// void findmax(int arr[],int n){
//     if(n==0){
//         maxi = 0;
//         return;
//     }
//     if(n==1){
//         maxi = 0;
//         return;
//     }
//     // int max = INT_MIN;
//     if(arr[i++]>maxi){
//         maxi = arr[i];
//     }
//     findmax(arr,n,i,maxi);
// }

// int main(){
//     int n,i;
//     cout << "Enter the size ";
//     cin >> n;
//     int arr[n];
//     int maxi = arr[0];

//     for(i=0;i<n;i++){
//         cin >> arr[i-1];
//     }
//     i = 0;
//     findmax(arr,n,i,maxi);
//     cout << maxi;

// }

// #include<iostream>
// using namespace std;
// void reverse(string str,int n){
//     if(n<0){
//         return;
//     }
//     // cout << str[n];
//     reverse(str,n-1);

// }

// int main(){
//     string str;

//     cin >> str;
//     int n = str.length();
//     // int i=0;
//      reverse(str,n-1);
//      int i=0;
//     //  cout <<str ;
//     if(str[i++] == str[n-1]){
//         cout << "Yes";
//     }
//     else {
//         cout << "NO";
//     }

// }

// #include<iostream>
// using namespace std;
// int findmaxsum(int arr[],int n){
//     int sum;
//     for(int i=0;i<n;i++){{
//         sum =0;
//         for(int j=i;j<n;j++){
//             sum +=arr[i];
//         }
//        cout << arr[i]<<" ";
//     }
//     }
//     cout << sum << endl; ;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     findmaxsum(arr,n);
    
// }