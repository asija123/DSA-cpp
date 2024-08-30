// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;

//     cin >> n;

//     switch (n)
//     {
//     case 1:
//         if (n = 1)
//         {
//             cout << "Monday" << endl;
//         }
//         break;
//     case 2:
//         if (n = 2)
//         {
//             cout << "Tuesday" << endl;
//         }
//         break;

//     case 3:
//         if (n = 3)
//         {
//             cout << "Wednesday" << endl;
//         }
//         break;

//     case 4:
//         if (n = 4)
//         {
//             cout << "Thrusday" << endl;
//         }
//         break;

//     case 5:
//         if (n = 5)
//         {
//             cout << "Fridayy" << endl;
//         }
//         break;

//     case 6:
//         if (n = 6)
//         {
//             cout << "Saturday" << endl;
//         }
//         break;

//     case 7:
//         if (n = 7)
//         {
//             cout << "Sunday" << endl;
//         }
//         break;

//     default:
//         cout << "please check the number" << endl;
//         break;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "enter the number" << endl;
//     cin >> n;

//     for(int i = 1; i<=n; i++){
//         cout << i <<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     char ch;

//     for(ch= 'a'; ch<= 'z'; ch++){
//         cout << ch << " ";
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;

//     cout <<"Enter the number" <<endl;

//     cin >> n;
//     int sum =0;
//     for(int i =1; i<=n; i++){
//         if(i%2==0){
//             // cout << i << " ";
//         sum = sum+i;
//         }
//     }
//     cout << sum << endl;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;

//     cout <<"Enter the number" <<endl;

//     cin >> n;

//      for(int i =1; i<=10; i++){
//         cout << n*i << endl;

//      }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//      cout<< "Enter the number"<< endl;

//      cin >> n;

//      for(int i =1; i<=n; i++){
//         if(n%i==0){
//             cout << "factor are :"<< i << " ";
//         }
//      }
//      return 0;

//      }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;

//     cout<< "Enter the number" <<endl;
//     cin >> n;
//     // int i =2;
//     int i=2;
//     while(i<n){
//         if(n%i == 0){
//             cout <<"prime" <<endl;
//         }
//         else {
//             cout << "Not prime"<< endl;
//         }
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;

//     cout << "Enter the number" <<endl;

//     cin >> n;
//     int fact = 1;
//     for(int i =1; i<=n; i++){
//          fact = fact * i;
//     }
//     cout << fact << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;

//     cout <<"Enter the number"<<endl;
//     cin >> n;
//     int prod = 1;
//     int digit;

//     while(n!=0){
//          digit = n%10;
//         //  sum = sum +digit;
//          prod = prod * digit;

//          n = n/10;
//     }
//     cout<< prod << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;

//     cout<< "Enter the number"<<endl;

//     cin >> n;
//     int sum = 0;

//     for(int i=0; i<=n; i++){
//         sum= sum+i;
//     }
//     cout<< sum << " ";
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;

//     cout << "Enter the number" << endl;

//     cin >> n;
//     int original =n;
//     int digit;
//     int num =0;
//     while (n != 0)
//     {
//         digit = n % 10;
//         num = (num * 10) + digit;
//         n = n / 10;
//     }
//     if(num == original){
//         cout<< "Palindrome";
//     }
//     else {
//         cout << "Not palindrome";
//     }
//         // cout << num <<endl;
//         return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;

//     cout << "Enter the number" << endl;

//     cin >> n;
//     int digit;
//     int num = 0;
//     while (n != 0)
//     {
//         digit = n % 10;
//         num = (num * 10) + digit;
//         n = n / 10;
//     }

//     while (num != 0)
//     {
//         switch (num % 10)
//         {
//         case 0:
//             cout << "zero ";
//             break;
//         case 1:
//             cout << "one ";
//             break;
//         case 2:
//             cout << "two ";
//             break;
//         case 3:
//             cout << "three ";
//             break;
//         case 4:
//             cout << "four ";
//             break;
//         case 5:
//             cout << "five ";

//             break;
//         case 6:
//             cout << "six ";

//             break;
//         case 7:
//             cout << "seven ";

//             break;
//         case 8:
//             cout << "eight ";

//             break;
//         case 9:
//             cout << "nine ";

//             break;
//         }

//         num = num / 10;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     cout << "Enter the size ";

//     cin >> n;

//     int arr[n];

//     for(i =0; i<n; i++){
//         cin >> arr[i];
//     }
//     cout << "ELement of array are :";

//     for(i = 0; i<n; i++){

//     cout  << arr[i] <<" ";
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     cout << "Enter the size ";

//     cin >> n;

//     int arr[n];

//     for(i =0; i<n; i++){
//         cin >> arr[i];
//     }
//    int sum = 0;
//    for(i = 0; i<n; i++){
//     sum = sum +arr[i];
//    }
//    cout << sum ;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int getmin( int arr[] , int n){
//     int min= INT_MAX;

//     for(int i = 0; i<n; i++){
//         if(arr[i]< min ){
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int getmax( int arr[] , int n){
//     int max= INT_MIN;

//     for(int i = 0; i<n; i++){
//         if(arr[i] > max ){
//             max= arr[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int n;

//     cout<< "Enter the size" <<endl;

//     cin >> n;

//     int arr[100];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     cout << "maximun number is: " << getmax(arr , n) <<endl;
//     cout << "minimun number is: " << getmin(arr , n) <<endl;

// }

// #include <iostream>
// #include <vector>

// std::vector<int> findSubarraySum(int N, int S, std::vector<int> A) {
//     std::vector<int> result;
//     int left = 0, right = 0;
//     int currentSum = 0;

//     while (right < N) {
//         currentSum += A[right];

//         while (currentSum > S) {
//             currentSum -= A[left];
//             left++;
//         }

//         if (currentSum == S) {
//             result.push_back(left + 1); // Convert to 1-based indexing
//             result.push_back(right + 1); // Convert to 1-based indexing
//             return result;
//         }

//         right++;
//     }

//     result.push_back(-1); // No subarray found
//     return result;
// }

// int main() {
//     int N, S;
//     std::cin >> N >> S;
//     std::vector<int> A(N);

//     for (int i = 0; i < N; i++) {
//         std::cin >> A[i];
//     }

//     std::vector<int> result = findSubarraySum(N, S, A);

//     for (int i : result) {
//         std::cout << i << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >>t;
//     while(t--){

//         int n , k;
//         cin >> n >> k;
//         int count = 0;

//         int arr[n];
//         for(int i =0; i<=n; i++){
//             if(arr[i]>k){
//                 count++;
//             }
//         }
//         cout << count <<endl;
//     }

//     return 0;
// }

// pivot
// #include<iostream>
// using namespace std;

// int getpivot(int arr[], int n){
//     int s = 0;
//     int e = n-1;

//     int mid  = s+ (e-s)/2;

//     while(s<e){
//         if(arr[mid] >= arr[0]) {
//             s= mid+1;
//         }
//         else {
//             e =mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main(){

//     int arr[5] = {3,8,10,17,1};

//     cout<<"pivot is " << getpivot(arr,5) <<endl;
// }

// #include<iostream>
// using namespace std;

// int find( int arr[], int n, int k){
//     int i;
//     for(i = 0; i<n; i++){
//         if(arr[i]==k){
//             return i;
//         }
//     }
//     return -1;
// }

// int main (){

//     int n;
//     cout << "enter the number" <<endl;
//     cin >> n;

//     int k;
//     cout << "enter the key" << endl;

//     cin >> k;

//     int arr[n];
//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }

//     int index=  find(arr , n ,k);
//     if(index !=-1){
//         cout << "index is " << index <<endl;
//     }
//     else {
//         cout << "key is not found" << endl;
//     }

// }

// #include<iostream>
// using namespace std;

// long long int binarysearch(int n){
//         int s = 0;
//         int e= n;
//         long long int mid = s + (e-s)/2;

//         long long int ans = -1;
//         while(s<=e){
//             long long int square  = mid*mid;

//             if(square == n)
//             return mid;

//             if (square<n){
//             ans = mid;
//             s = mid +1;
//         }
//             else{
//                 e = mid-1;
//             }
//         mid= s + (e-s)/2;
//     }
//     return ans;
//     }

//     int main() {
//         int n;
//         cout <<"enter the number" << endl;
//         cin >> n;

//         cout << binarysearch(n) << endl;

//     }

// #include<iostream>
// using namespace std;

// long long int binarysearch(int n){
//         int s = 0;
//         int e= n;
//         long long int mid = s + (e-s)/2;

//         long long int ans = -1;
//         while(s<=e){
//             long long int square  = mid*mid;

//             if(square == n)
//             return mid;

//             if (square<n){
//             ans = mid;
//             s = mid +1;
//         }
//             else{
//                 e = mid-1;
//             }
//         mid= s + (e-s)/2;
//     }
//     return ans;
//     }
//     double moreprecise(int n , int precise, int tempsoll){
//         double factor = 1;
//         double ans = tempsoll;

//         for(int i=0; i<precise; i++){
//             factor = factor/10;
//             for(double j = ans; j*j<n; j = j+factor){
//                 ans = j;
//             }
//         }
//         return ans;
//     }

//     int main() {
//         int n;
//         cout <<"enter the number" << endl;
//         cin >> n;
//         int tempsoll = binarysearch(n);
//         cout <<"answer is " << moreprecise(n ,3, tempsoll);

//     }

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout << "emter the number"<<endl;
//     cin >> n;

//     int arr[n];

//     for(int i =0; i<n; i++){
//         cin >> arr[i];
//     }
//     int ans;

//     for(int i = 0; i<n; i++){
//         if(arr[i]==arr[i+1]){
//             ans = arr[i];
//         }

//     }
//     cout << ans <<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout <<"Enter the number " << endl;
// cin >> n;

// int fact =1;

// for(int i= 1; i<=n; i++){
//     fact = fact*i;
// }
// cout  << fact <<endl;
// int n;
// cout << "Enter the number " <<endl; ;
// cin >> n;

// for(int i=2; i<n; i++){
//     if(n%i == 0){
//         // return 1;
//         cout << " Not Prime";
//         break;
//     }
//     else{
//         // return 0;
//         cout << "Prime";
//         break;
//     }
// }

// int a;
// a = cin.get();

// cout << "Value of a is  : " << a <<endl;
// char ch;
// cout << "Enter the character " << endl;
// cin >> ch;

// if('a'<=ch && ch <= 'z'){
//     cout << "This is the lower case"<< endl;
// }
// else if('A' <=ch && ch <= 'Z'){
//     cout << "This is upper case" << endl;
// }
// else if('0'<=ch && ch <= '9'){
//     cout << "This is numeric"<<endl;
// }
// else {
//     cout << "other" << endl;
// }

// int n;
// cout << "Enter the number "<< endl;
// cin >> n;
// int i =1;;
// while(i<=n){
//     int j =1;
//     while(j<=n){
//         cout << i;
//         j++;
//     }
//     cout << endl;
//     i++;
// }
// int n;
// cout << "Enter the number" << endl;
// cin >> n;
// int i= 1;
// while(i<=n){
//     int j= 1;
//     while(j<=n){
//         cout << n-j+1 << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }
// int i =1;
// int count =1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout << count << " ";
//         count = count +1;
//         j++;
//     }
//     cout << endl;
//     i++;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*" << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j > i)
//         {
//             cout << n-j+1 << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int prime(int n)
// {
//     int flag = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             flag == 1;

//             break;
//         }
//     }
//     if (flag == 1){
//         cout << "not primt" << endl;

//     }
//     else {
//         cout << "prime" << endl;
//     }
// }

// int main()
// {
//     int n;

//     cout << "enter the number" << endl;
//     cin >> n;

//     prime(n);
// }

// #include<iostream>
// using namespace std;
// int main(){

//     int n;

//      cin >> n;
//      int digit;
//      int rev = 0;

//      while(n!=0){
//         digit = n%10;
//         rev = rev *10 + digit;
//         n= n/10;
//      }
//      cout << rev;
// }

// #include<iostream>
// using namespace std;

// void reverse(char ch[], int n){

//    int s=0;
//    int e= n-1;

//    while(s<e){
//       swap(ch[s++], ch[e--]);
//    }
// }

// int getlength( char ch[]){
//    int count =0;
//    for(int i=0; ch[i] !='\0'; i++){
//       count++;
//    }
//    return count;
// }

// int main(){

//    char ch[20];

//    cout << "Enter your name "<< endl;
//    cin >> ch;
//    int len = getlength( ch);
// cout << "Length is " << len << endl;

// reverse(ch , len);
// cout << "after reverse ";
// cout << ch << endl;

// }

// array question

// #include<iostream>
// using namespace std;

// int main(){

//    int n;
//    cout << "enter the size" << endl;
//    cin >> n;
//    int arr[n];

//    for(int i=0;i<n; i++){
//       cin >>arr[i];
//    }

//    for(int i=0; i<n; i++){
//       cout << arr[i]<<  " ";
//    }
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//    int n;
//    cout << "Enter the size" << endl;
//    cin >> n;

//    int arr[n];
//    int sum = 0;

//    for (int i = 0; i < n; i++)
//    {
//       cin >> arr[i];
//       sum += arr[i];
//    }

//    // int sum= 0;
//    // for(int i=0; i<n;i++){
//    //    sum +=arr[i];
//    // }

//    cout << "sum is " << sum << endl;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int max(int arr[] , int n){

//    int max = INT_MIN;
//    for(int i=0; i<n; i++){
//       if(arr[i]>max)
//       max = arr[i];
//    }
//    return max;
// }

// int min(int arr[] , int n){

//    int min = INT_MAX;
//    for(int i=0; i<n; i++){
//       if(arr[i]<min)
//       min = arr[i];
//    }
//    return min;
// }

// int main(){

//    int n;
//    cout << "Enter the size" << endl;
//    cin >> n;

//    int arr[n];

//    for(int i=0; i<n; i++){
//       cin >> arr[i];
//    }

//    cout << "max element is " << max(arr , n) << endl;
//    cout << "min element is " << min(arr , n) << endl;

// }

// #include<iostream>
// using namespace std;
// int find( int arr[][100] ,int n, int m ,int k ){
//    for(int i=0;i<n;i++){
//       for(int j=0; j<n; j++){
//          if(arr[i][j]==k){
//             return k;
//          }
//       }
//    }
//    return -1;
// }

// int main(){

//    int n,m;
//    cout << "ENter the size " ;
//    cin >> n >> m;

//    int arr[100][100];

//    for(int i=0;i<n;i++){
//       for(int j=0; j<m; j++){
//          cin >> arr[i][j];
//       }
//    }

//    for(int i=0;i<n;i++){
//       for(int j=0; j<m; j++){
//          cout <<  arr[i][j] << " ";
//       }
//       cout <<endl;
//    }

//    int k;
//    cout << "ENter the find ";
//    cin >> k;
//    int result = find(arr , n , m ,k);

//    if(result==-1){
//       cout << " element not found" <<endl;
//    }
//    else {
//       cout << "element found " << result <<  endl;
//    }

// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int secondlargest(int arr[] , int n){
//    int max1 ,max2;
//    max1= max2 = INT_MIN;
//    for(int i=0; i<n; i++){
//       if(arr[i]>max1){
//       max2 = max1;
//       max1= arr[i];
//       }
//       else if(arr[i]>max2){
//          max2=arr[i];
//       }
//    }
//    return max2;

// }

// int main(){
//    int n;
//    cout << "Enter the size " ;
//    cin >> n;

//    int arr[n];

//    for(int i=0;i<n;i++){
//       cin >> arr[i];
//    }
//    cout << "second largest element is: " <<secondlargest(arr,n);

// }

// pair sum
// #include <iostream>
// using namespace std;
// int pairsum(int arr[100], int n, int m)
// {
//    // int first ,second;
//    int sum = 0;
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i + 1; j < n; j++)
//       {
//          sum = arr[i] + arr[j];
//          if (sum == m)
//          {
//             count++;
//          }
//       }
//    }
//    cout << count;
// }

// int main()
// {
//    int n;
//    cout << "Enter the size ";
//    cin >> n;

//    int arr[100];

//    for (int i = 0; i < n; i++)
//    {
//       cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//       cout << arr[i] << " " << endl;
//    }

//    int m;
//    cout << "Enter the target ";
//    cin >> m;

//    pairsum(arr, n, m);
// }

// #include<iostream>
// using namespace std;
// int wave(int arr[][100], int r, int c){
//    // int up ,down;

//       bool flag=true;
//    for(int i=0;i<c;i++){
//       if(flag){
//         for(int j=0;j<r;j++)
//         cout<<arr[j][i]<<" ";
//         flag=false;
//       }
//       else{
//         for(int j=r-1;j>=0;j--){
//          cout<<arr[j][i]<<" ";
//         flag=true;
//         }
//       }
//    }

// }

// int main(){
//    int r,c;
//    cout << "Enter the size ";
//    cin >> r >> c;

//    int arr[100][100];

//    for(int i=0; i<r; i++){
//       for(int j=0;j<c;j++){
//          cin >> arr[i][j]  ;
//       }
//    }
//    for(int i=0; i<r; i++){
//       for(int j=0;j<c;j++){
//          cout<<  arr[i][j] << " " ;
//       }
//       cout <<endl;
//    }
//    wave(arr , r, c);

// }


// #include <iostream>
// using namespace std;
// int pairsum(int arr[100], int n, int m)
// {
//    // int first ,second;
//    int sum = 0;
//    int count = 0;
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i + 1; j < n; j++)
//       {
//          sum = arr[i] + arr[j];
//          if (sum > m)
//          {
//             count++;
//          }
//       }
//    }
//    cout << count;
// }

// int main()
// {
//    int n;
//    cout << "Enter the size ";
//    cin >> n;

//    int arr[100];

//    for (int i = 0; i < n; i++)
//    {
//       cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//       cout << arr[i] << " " << endl;
//    }

//    int m;
//    cout << "Enter the target ";
//    cin >> m;

//    pairsum(arr, n, m);
// }


// #include<iostream>
// using namespace std;
// bool check(char ch[100], char ch1[100]){
//    for(int i=0;i<ch[i] != '/O';i++){
//       char in;
//       in = ch/10;
//    }
//    for(int i=0;i<ch1[i] != '/O';i++){
//       char un;
//       un = ch1/10
//       if(in == un){
//          return true;
//       }
//    }
//    return false;

// }

// int main(){

//    char ch[100];
//    cout << "Enter the char "<< endl;
//    cin >> ch;
//    char ch1[100];
//    cout << "Enter the char1 " << endl;
//    cin >> ch1;

// bool result = check(ch , ch1);
// if(result = true){
//    cout << "YES"<<endl;
// }
// else {
//    cout << "NO"<<endl;
// }

// }


// #include<iostream>
// using namespace std;

// bool checkacs(int arr[],int n){
//    for(int i=0;i<n;i++){
//       if(arr[i]<arr[i+1]){
//          return 1;
//       }
//    }
//    return 0;
// }

// int main(){

//    int n;
//    cout << "ENter the size ";
//    cin>>n;

//    int arr[n];

//    for(int i=0;i<n;i++){
//       cin >> arr[i];
//    }

//    for(int i=0;i<n;i++){
//       cout << arr[i] << " ";
//    }
//    checkacs(arr,n);
//    // bool result = checkacs(arr,n);

//    // if(result = 1){
//    //    return 1;
//    // }
//    // else{
//    //    return 0;
//    // }

// }

// #include<iostream>
// using namespace std;
// int linear(int arr[] ,int n,int k){
//    int i;
//    for(i=0;i<n;i++){
//       if(arr[i] == k){
//          return i;
//       }
//    }
//    return -1;
// }

// int main(){
//    int n;
//    cout <<"Enter the size ";
//    cin >> n;

//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin >> arr[i];
//    }
//    for(int i=0; i<n; i++){
//       cout << arr[i] << " " << endl;
//    }

//    int k;
//    cout << "Enter the k ";
//    cin >> k;

//    int val = linear(arr,n,k);
//    cout << "Index is : " << val;

// }

// 2.Check whether two string are anagram or not.
// Example:- s1=”bcda”
//           s2=”abcd”
// answer-Yes


// #include<iostream>
// using namespace std;
// bool check(string s, string s1){

//    for(int i=0;i<s.size(); i++){
//       for(int j=0;j<s1.size();j++){
//          if(s[i]==s1[j]){
//             return true;
//          }
//       }
//    }
//    return false;
// }

// int main(){

//    string s;
//    cout << "enter the s: "<<endl;
//    cin >> s;
//    string s1;
//    cout << "enter the s1: "<<endl;
//    cin >> s1;

//    bool result = check(s,s1);

//    if(result == true){
//       cout << " true";
//    }
//    else{
//       cout << "false";
//    }
//    return 0;

// }

// pending

// #include<iostream>
// using namespace std;

// int number(int arr[],int n){

//    int arr1[100];
//    for(int i=0;i<n;i++){
//       arr1[i] = i%10;
//    }
//    cout << arr1;
// }

// int main(){
//    int n;
//    cout << "Enter the size ";
//    cin >> n;

//    int arr[n];

//    for(int i=0;i<n;i++){
//       cin >> arr[i];
//    }
//    number(arr,n);

// }

// #include<iostream>
// using namespace std;

// int abc(int arr[][100],int n, int m){
//    int sum =0;
//    int j;
//    for(int i=0;i<n;i++){
//       // for(j=0;j<m;j++){
//       //    if(arr[i]==arr[j]){
//       //    }
//             sum +=arr[i][i];
//          // cout << "sum is" << sum;
//       // }
//    }
//    return sum;
// }

// int main(){
//    int n ,m;
//    cout << "Enter the value of n and m ";
//    cin >> n>> m;
//    int arr[100][100];

//    for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//          cin >> arr[i][j];
//       }
//    }
//    for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//          cout <<  arr[i][j] << " ";
//       }
//          cout << endl;
//    }

//    int result = abc(arr , n,m);
//    cout << result ;

// }

// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int seprating(int arr[], int n){

//    int digit,num;
//       int answer;
//    for(int i=0;i<n;i++){
//       while(n>0){
//       digit = arr[i]%10;
//       answer.push_back(digit);
//       num = arr[i]/10;
//    }
//    return answer;
// }

// int main(){
//    int n;
//    cout << "Enter the size ";
//    cin >> n;

//    int arr[n];

//    for(int i=0;i<n;i++){
//       cin >> arr[i];
//    }
//    int result = seprating(arr,n);
//    cout << result ;
// }

// #include<iostream>
// // #include<bits/stdc++.h>
// using namespace std;
// int main(){

//    int size1;
//    cout << "Enter the number " ;
//    cin >> size1;

//    int arr[size1];

//    for(int i=0;i<size1;i++){
//       cin >> arr[i];
//    }
//    int size2;
//    cout << "Enter the number " ;
//    cin >> size2;

//    int arr1[size2];

//    for(int i=0;i<size2;i++){
//       cin >> arr1[i];
//    }

//    int  arr3[size1+size2];

//     for(int i=0;i<size1;i++){
//       arr3[i] = arr[i];
//    }

//    for(int i=0;i<size2;i++){
//       arr3[i+size1] = arr1[i];
//    }

//    // for(int i=0;i< size1+size2;i++){
//    // }
//    for(int i=0;i< size1+size2;i++){
//       cout << arr3[i] << " ";
//    }
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int size1;
//     cout << "Enter the number: ";
//     cin >> size1;

//     int arr[size1];

//     for(int i = 0; i < size1; i++) {
//         cin >> arr[i];
//     }

//     int size2;
//     cout << "Enter the number: ";
//     cin >> size2;

//     int arr1[size2];

//     for(int i = 0; i < size2; i++) {
//         cin >> arr1[i];
//     }

//     int arr3[size1 + size2];

//     for(int i = 0; i < size1; i++) {
//         arr3[i] = arr[i];
//     }

//     for(int i = 0; i < size2; i++) {
//         arr3[i + size1] = arr1[i];
//     }

//     for(int i = 0; i < size1 + size2; i++) {
//         cout << arr3[i] << " ";
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){

//    int size1;
//    cout << "Enter the number " ;
//    cin >> size1;

//    int arr[size1];

//    for(int i=0;i<size1;i++){
//       cin >> arr[i];
//    }
//    int size2;
//    cout << "Enter the number " ;
//    cin >> size2;

//    int arr1[size2];

//    for(int i=0;i<size2;i++){
//       cin >> arr1[i];
//    }

//    int  arr3[size1+size2];

//     for(int i=0;i<size1;i++){
//       arr3[i] = arr[i];
//    }

//    for(int i=0;i<size2;i++){
//       arr3[i+size1] = arr1[i];
//    }

//    int n = size1+size2;
 
//    for(int i=0;i< n;i++){
//       cout << arr3[i] << " " ;
//    }
//    cout << endl;
//    int count = 0;
//    for(int i=0;i< n; i++){
//       if(arr3[i] == arr3[i+1])
//       count++;
//    }
//    cout << count;
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin >> n;
//    int arr[n];

//    for(int i=0;i<n;i++){
//       cin >>arr[i];
//    }
//    int sum =0;
//    for(int i=0;i<n;i++){
//       sum = sum+arr[i];
//    }
//    cout << sum;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int findmax(int arr[],int n){
//    int max = INT_MIN;
//    for(int i=0;i<n;i++){
//       if(arr[i]>max){
//          max = arr[i];
//       }
//    }
//    return max;
// }
// int findmin(int arr[],int n){
//    int min = INT_MAX;
//    for(int i=0;i<n;i++){
//       if(arr[i]<min){
//          min = arr[i];
//       }
//    }
//    return min;
// }


// int main(){
//    int n;
//    cout << "Enter the number ";
//    cin >> n;

//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    int result = findmax(arr,n);
//    int ans = findmin(arr,n);
//    cout << result <<" "<< ans;
// }

// #include<iostream>
// using namespace std;
// int rotate(int arr[],int n,int k){
//    int i =0,j=n-1;
//    while(i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//       return arr[i];
//          }
//          // cout <<arr[i];
// }

// int main(){
//    int n;
//    cin >>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//       cin >> arr[i];
//    }
//    int k;
//    cin >> k;
//     rotate(arr,n,k);
//     for(int i=0;i<n;i++){
//    cout << arr[i] << " ";

//     }


// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//    map<int,int>m1;
//    int n;
//    cin >>n;
//    int arr[n];
//    for(int &i:arr)
//    cin >>i;
//    for(int i=0;i<n;i++)
//    m1[arr[i]]++;
//    for(auto it:m1){
//       cout << it.first <<" "<<it.second <<endl;
//    }
// }

// #include<iostream>
// using namespace std;
// void rowsum(int arr[][100],int n,int m){
//    for(int i=0;i<m;i++){
//    int sum =0;
//       for(int j=0;j<n;j++){
//          sum = sum+arr[j][i];
//       }
//       cout <<sum <<endl;
//    }
//    // return sum;
// }
// int main(){

//    int n,m;
//    cin >>n>>m;

//    int arr[100][100];
//    for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//          cin >>arr[i][j];
//       }
//    }
//     for(int i=0;i<n;i++){
//       for(int j=0;j<m;j++){
//          cout << arr[i][j] << " ";
//       }
//       cout << endl;
//    }
//    // int sum =0;s
//    rowsum(arr,n,m);
   
// }

// #include<iostream>
// using namespace std;
// class area{
//     private:
//     double length;
//     double breath;

//     public:
//     area(double l,double b)  {
//         length = l;
//         breath = b;
//     }

//     double caarea(){
//         return length * breath;
//     }
// };

// int main(){
//     int l,b;
//     cin >> l>>b;
//     area Area(l,b);
//     // area Area1(3,5);

//     cout << "Area is " << Area.caarea() << endl;
//     // cout << "Area is " << Area1.caarea() << endl;


// }

// #include<iostream>
// using namespace std;
// class triangle{
//     public:
//     double a;
//     double b;
//     double c;
//     triangle(double a,double b, double c){
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
//     void check(){
//     if(a==b && a==c){
//         cout <<"equilatral"<<endl;
//     }
//     else if((a != b && b==c ) || (b!=c && a==c )){
//         cout << "isosceles" << endl;
//     }
//     else {
//         cout << "saclene" << endl;
//     }
//     }
// };

// int main(){
//     double a,b,c;
//     cin >> a>> b>> c;

//     triangle abc(a,b,c);
//     abc.check();
//     return 0;

// }

// #include<iostream>
// #include<string>
// using namespace std;

// class electronic{
//     public:
//     string name;
//     double rate;
//     double quantity;
//     public:
//     void product(string name,double rate ,double quantity){
//         this->name = name;
//         this->rate = rate;
//         this->quantity = quantity;
//     }
    
//     electronic operator + (electronic c){
//          electronic temp;
//           temp.rate = rate*quantity + c.rate*c.quantity;
//           return temp;
//     }
//     void print(){
//         cout << rate << endl;
//     }

// };
// int main(){
//     electronic e1 ,e2;

//    e1.product("laptop",50000,3);
//    e2.product("ac",100000,2);
//    electronic e3;
//    e3 = e1+e2;
//     e3.print();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
//     public:
//     int r,i;
//     public:
//     void getdata(){
//         cout << "Enter the number: " <<endl;
//         cin >>r >>i;
//     }
//     void putdata(){
//         cout << "real " << r << " img " << i <<endl;
//     }
//     complex operator + (complex bb){
//         complex cc;
//         cc.r = r + bb.r;
//         cc.i = i + bb.i;
//         return cc;
//     }
// };

// int main(){
//     complex aa ,bb, cc;
//     aa.getdata();
//     bb.getdata();
//     cc = aa + bb;
//     aa.putdata();
//     bb.putdata();
//     cc.putdata();
//     return 0;


// }

// #include <iostream>
// using namespace std;
// class spaceship{
//     public:
//     int a;
//     int *n;
//     public:
//     spaceship(int a){
//         this->a = a;
//         this->n = new int[a];
//     }
//     void show(){
//         cout << "a spaceship with " << a <<" modules and memory" <<endl;
//     }
//     ~spaceship(){
//         delete[] n;

//     }
// };

// int main()
// {
//     spaceship s1(10);
//     s1.show();
    
//     return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;
// class wands{
//     string core;
//     int length;
//     static int max;
//     static string res;
//     static int check;
//     public:
//     void space(string core,int length){
//         this->core = core;
//         this->length = length;
//         if(length > check){
//             check = length;
//             res = core;
//         }
//         if(length>=0){
//             max = max + length;
//         }
//     }
//     void display(){
//         cout << res <<" " << max << endl;
//     }
// };
// int wands::max = 0;
// int wands::check = 0;
// string wands::res = " ";
// int main()
// {
//     wands w1,w2;
//     w1.space("phoenix",10);
//     w2.space("dragon", 8);
//     w2.display();

    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class hunt{
//     public:
//     int x;
//     int y;
//     public:
//     void maps(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
//     hunt operator +(hunt y){
//         hunt c;
//         c.x = this->x + y.x;
//         c.y = this->y + y.x;
//         return c;
//     }
//     void display(){
//         cout << "x " << x << " y "<< y <<endl;
//     }
// };
// int main()
// {
//     hunt m1,m2,m3;
//     m1.maps(30,40);
//     m2.maps(20,15);
//     m3 = m1+m2;
//     m3.display();

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class animal{
//     public:
//     string name;
//     int age;
// };
// class lion:public animal{
//     public:
//     void getdata(){
//         cout << "Enter the number"<<endl;
//         cin >> name >>age;
//     }
//     void putdata(){
//         cout << "name is " << name << " age is "<<age <<endl;
//     }
// };
// class elephant:public animal{
//     public:
//     void getdata(){
//         cout << "Enter the number"<<endl;
//         cin >> name >>age;
//     }
//     void putdata(){
//         cout << "name is " << name << " age is "<<age <<endl;
//     }

// };
// class monkey :public animal{
//     public:
//     void getdata(){
//         cout << "Enter the number"<<endl;
//         cin >> name >>age;
//     }
//     void putdata(){
//         cout << "name is " << name << " age is "<<age <<endl;
//     }

// };
// int main()
// {
//     animal m1;
//     lion m2;
//     elephant m3;
//     monkey m4;
//     m2.getdata();
//     m2.putdata();
//     m3.getdata();
//     m3.putdata();
//     m4.getdata();
//     m4.putdata();

    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class cart{
//     public:
//     string code;
//     int quantity;
//     public:
//     void setdata(){
//         cin >>code >> quantity;
//     }
//     void items(){
//         if(code == " "){
//             cout << "error";
//         }
//         if(quantity < 0){
//             cout << "error too";
//         }
//     }

// };
// int main()
// {
//     cart m1;
//     m1.setdata();
//     m1.items();

    
//     return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;
// class depart{
//     public:
//     string name ;
//     string code;
//     public:
//     virtual void display_info(){
//         cout << "virtual number code" <<endl; 
//     }
// };
// class mathdepart:public depart{
//     public:
//     void getdata(){
//         cin >> name >> code;
//     }
//     void display_info(){
//         cout << "name " << name << " is code " << code;

//     }
// };
// int main()
// {
//     mathdepart m1; 
//     m1.getdata();
//     m1.display_info();

    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class distance1{
//     public:
//     double feet;
//     double inch;
//     public:
//     void getdata(){
//         cin >> feet >> inch;
//     }
//     void putdata(){
//         if(inch == 12){
//             cout <<feet+1 <<"'"<<inch <<'"'<< endl;
//         }
//         else if (inch == 24){
//            cout << feet+2 <<"'"<<endl;
//         }
//         else if (inch <=12){
//             cout << feet<<"'" << inch << '"'<<endl;
//         }
//         else if(inch>12){

//         cout << feet+1 << "'" << inch-12 << '"';
//         }
//     }
//     distance1 operator + (distance1 d){
//         distance1 d1;
//         d1.feet = this->feet + d.feet;
//         d1.inch = this->inch + d.inch;
//         return d1;
//     }
//     distance1 operator - (distance1 d){
//         distance1 d1;
//         d1.feet = this->feet - d.feet;
//         d1.inch = this->inch - d.inch;
//         if(d1.feet<0){
//             d1.feet = -d1.feet;
//         }
//         if (d1.inch<0){
//             d1.inch = -d1.inch;
//         }
//         return d1;
//     }
// };
// int main()
// {
//     distance1 a,b,c;
//     a.getdata();
//     b.getdata();
//     c = a + b;
//     c = a-b;
//     c.putdata();

    
//     return 0;
// }

// #include<iostream>
// #include<set>
// #include<string>
// #include<functional>
// using namespace std;

// clasa person{
//     public:
//     float age;
//     string name;
// };

// int main(){
//     set<person>set = {{30,"rupesh"}, };
//     for(const auto& e: set){
//         cout << e <<endl;
//     }
// }

// #include <iostream>
// #include<deque>
// #include<vector>
// using namespace std;
// int main()
// {
//     deque<int> mydeque;

//     for(int i=0;i<5;i++){
//         mydeque.push_back(i);
//     }
//     cout << "my deque contains";
//     deque<int>:: iterator it = mydeque.begin();
//     while(it!=mydeque.end()){
//         cout << " " << *it++;
//     }

//     return 0;


// }

// #include <iostream>
// #include<set>
// // #include<pair>
// using namespace std;
// int main()
// {
//     set<int>myset;
//     set<int>::iterator it;
//     pair<set<int>::iterator,bool>ret;

//     for(int i=0;i<=5;++i){
//         myset.insert(i*10);
//     }
//     if(ret.second==false) {
//         it = ret.first;
//     }
//     myset.insert(it,29);
//     myset.insert(it,23);
//     myset.insert(it,48);

//     int myints[] = {2,4,5};
//     myset.insert(myints,myints+3);
//     cout <<"myset contain";
//     for(it = myset.begin(); it!=myset.end();++it){
//         cout << " " <<*it;
//     }






// size
    // cout << "size is " << myset.size()<<endl;
    // for(int i=0;i<10;i++){
    //     myset.insert(i);
    // }
    // cout << "size " << myset.size()<<endl;

    // myset.insert(100);
    // cout << "aize " <<myset.size()<<endl;

    // myset.erase(5);
    // cout << "size " << myset.size();

    // empty
    // myset.insert(20);
    // myset.insert(50);
    // myset.insert(26);

    // while(!myset.empty()){
    //     cout << ' ' << *myset.begin();
    //     myset.erase(myset.begin());
    // }
//     return 0;
// }


// --------Linked List------------

#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
    ~Node(){
        int value = this ->data;

        if(this -> next = NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "delete value is " << value << endl;
    }
};

void insertathead(Node* &head, Node* &tail ,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}
void inserattail(Node* &tail ,Node* &head , int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = temp;
    }
}

void inseratposition(Node* &head , Node* &tail , int position, int d){
    
    if(position == 1){
        insertathead(head,tail,d);
    }
    
    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        inserattail(tail,head,d);
    }

    Node* nodetoinserted = new Node(d);
    nodetoinserted -> next = temp -> next;
    temp -> next = nodetoinserted;
}

void deletenode(Node* &head, Node* &tail , int position){

    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;

        if(prev -> next == NULL){
            tail = prev;
        }

        delete curr;
    }

}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}



int main()
{
    Node* head = NULL;
    Node* tail =NULL;

    insertathead(head,tail ,9);
    print(head);

    inserattail(tail,head ,10);
    print(head);

    inserattail(tail ,head, 11);
    print(head);

    inserattail(tail ,head, 12);
    print(head);

    inseratposition(head, tail ,3 ,100);
    print(head);

    inseratposition(head,tail,5,200);
    print(head);

    deletenode(head,tail,6);
    print(head);
    cout << "head is "<< head -> data << endl;
    cout << "tail is "<< tail -> data << endl;
    
    
    return 0;
}