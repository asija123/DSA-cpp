// #include <iostream>
// using namespace std;
// class check{
//     public:
//     double num;
//     check(double &num){
//         if(num==0){
//             cout << "number is nuteral"<<endl;
//         }
//         else if(num>0){
//             cout << "number is positive"<<endl;
//         }
//         else{
//             cout << "number is negitive"<<endl;

//         }

//     }
// };
// int main()
// {
//     double n;
//     cin >>n;
//     check c1(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string vow = "aeiouAEIOU";
//     string str;
//     getline(cin,str);
//     int count =0;
//    for(int i=0;i<str.length();i++){
//     for(int v=0;v<vow.length();v++){
//         if(str[i]==vow[v]){
//             count ++;
//     }
//    }
//         }
//         cout << count << endl;

//     return 0;
// }

// #include <iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "Enter the number " << endl;
//     cin >>a;

//     int rem = 0;
//     int num = 0;
//     int temp = a;
//     while(temp>0){
//         temp= temp/10;
//         num++;
//     }
//     temp = a;

//     while(temp>0){
//         int digit = temp%10;
//         rem += pow(digit,num);
//         temp= temp/10;
//     }
//     if(a == rem){
//         cout << "Armstrong" <<endl;
//     }
//     else {
//         cout << "not";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the numer" << endl;
//     cin>>n;
//     int i=0;
//     while(i<=n){
//         int j=0;
//         while(j<i){
//             cout << j+1 << " ";
//             j++;
//         }
//         cout <<endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool prime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i!=0){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// }
// int main(){

//     int n;
//     cout << "Enter the number" <<endl;
//     cin >>n;
//     int result = prime(n);
//     if(result){
//         cout << "prime" <<endl;
//     }
//     else {
//         cout << "Not";
//     }

//         return 0;
//     }

// #include <iostream>
// using namespace std;
// void pali(int n){
//     int rem =0;
//     while(n>0){
//         int digit = n%10;
//         rem = digit + rem*10;
//         n= n/10;
//     }
//     int original = n;
//     if(original == rem){
//         cout << "Pali" <<endl;
//     }
//     else{
//         cout << "not";
//     }

// }
// int main()
// {
//     int n;
//     cout << "Enter the number " <<endl;
//     cin >>n;
//     pali(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     string str1;
//     cin >> str1;
//     int alpha[26] = {0};
//     for(int i=0;i<str.length();i++){
//         alpha[i-'a']++;
//     }
//     int beta[26] = {0};
//     for(int i=0;i<str1.length();i++){
//         beta[i - 'a']++;
//     }
//     for(int i=0;i<str.length();i++)
//     if(str.length() != str1.length()){
//         cout << "Not";
//     }
//     else if(alpha[i] == beta[i]){
//         cout << "YES";
//         break;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number" <<endl;
//     cin >>n;
//     int i=0;
//     while(i<=n){
//         int j=0;
//         while(j<i){
//             cout << "*" << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size"<<endl;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     // int i;
//     for(int i=1;i<=n;i++){
//         bool found = false;

//     for(int j=0;j<=n;j++){
//         if(arr[j] == i){
//             found = true;
//             break;
//         }
//     }
//         if(!found){
//             cout << "Missing " << i <<endl;
//         }
//     }
//         // arr[0] = 0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//         }
//         }

//     }
//     int count =0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1]){
//             count= i;
//             break;
//         }
//     }
//     cout <<"duplicate element is: "<< arr[count];

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int stairs(int n){
//     if(n==1)
//         return 1;

//     if(n==2)
//         return 2;
//     return stairs(n-1)+stairs(n-2);
// }
// int main()
// {
//     int n;
//     cin >>n;
//     cout << stairs(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout <<"Enter the number "<< endl;
//     cin >>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int fr[n];
//     int visited  = -1;
//     for(int i=0;i<n;i++){
//        int count =1;
//        for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//             count++;
//             fr[j] = visited;

//         }
//        }
//        if(fr[i] != visited)
//        fr[i] = count;

//     }
//     for(int i=0;i<n;i++){
//         if(fr[i] != visited){
//             cout << arr[i] << " " << fr[i]<<endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n" ;
//     cin >> n;

//     int arr[100];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;
//     int arr1[n];
//     int p=0;
//     for(int i=k;i<n;i++){
//         arr1[p++] = arr[i];
//     }
//     for(int i=0;i<k;i++){
//         arr1[p++] = arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout <<arr1[i]<<" ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n";
//     cin >> n;

//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int duplicate[n+1] = {0};
//     for(int i=0;i<n;i++){
//         duplicate[arr[i]]++;
//         if(duplicate[i] >1){
//             cout << arr[i];
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n ";
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int duplicate[n+1] = {0};
//     for(int i=0;i<n;i++){
//         duplicate[arr[i]]++;
//         if(duplicate[i]>1){
//             cout << arr[i] <<endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n ";
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int occ[n+1] = {0};
//     for(int i=0;i<n;i++){
//         occ[arr[i]]++;
//     }
//     for(int i=1;i<n;i++){
//         if(occ[i] >0){
//         cout << i << "|" <<occ[i] << endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the n " << endl;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int unique[n+1] = {0};
//     for(int i=0;i<n;i++){
//         unique[arr[i]]++;

//         if(unique[i]==1){
//             cout << arr[i] << " ";

//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin ,str);
//     int count =0;
//         int i=0;
//     while(str[i] != '\0'){
//         if('a' <  str[i] <  'z' || 'A' <  str[i] <  'Z'){
//             count++;
//         }
//             i++;
//     }
//     cout << count;

//     return 0;
//     }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch[n];
//     cin.getline(ch,n);
//     int words = 0;
//     for(int i=0;ch[i] != '\0';i++){
//         if(ch[i] == ' '){
//             words++;
//         }
//     }
//         cout << "words " << words <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout << " m is ";
//     cin >>m;
//     int ma;
//     cout << " ma is " ;
//     cin >> ma;
//     int sum =0;

//     for(int i=m;i<=ma;i++){
//         if(m>ma){
//             return 0;
//         }
//         else {
//             sum += i;
//         }
//     }
//         cout << "Sum is " << sum;

//     return 0;
// }

//  binery to decimal
// #include<iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i =0;
//     int ans= 0;
//     while(n!=0){
//         int digit = n%10;
//         if(digit == 1){
//             ans = ans + pow( 2,i);
//         }
//         n = n/10;
//         i++;
//     }
//     cout << ans;
// }

// decimal to binery
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     int ans = 0 ;
//     int i = 0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10 , i) )+ ans;

//         n= n>>1;
//         i++;
//     }
//     cout << ans;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin >> n>>m;
//     while(m!=0){
//         int temp = m;
//         m = n%m;
//         n = temp;
//     }
//     cout << n;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string n;
//     cout <<"Enter the s " <<endl;
//     string str[n];
//     getline(cin,str);
//     for(int i =0;i<str.length();i++){
//         if(str[i] == '(' && str[i] == ')'){
//             continue;
//             if(str[i] == '{' && str[i] == '}'){
//                 continue;
//                 if(str[i] == "[" && str[i] == "]"){

//                 }
//             }
//             return true;

//         }
//         else{
//             return false;
//         }

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class value{
//     public:
//     int a;
//     int b;
//     void getdata(int& a,int& b){
//         cin >> a >> b;
//     }
//     void area(int& a , int& b){
//         cout << "Area is: " << a*b <<endl;
//     }
//     void peri(int& a,int& b){
//         cout << "Perimeter is: " << 2*(a+b) <<endl;
//     }
//     void rec(int& a,int& b){
//         cout << "Rectangle is: " << a*b <<endl;
//     }
// };

// int main()
// {
//     value c;
//     int a,b;
//     c.getdata(a,b);
//     c.area(a,b);
//     c.peri(a,b);
//     c.rec(a,b);

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Size : ";
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         arr.push_back(a);
//     }
//     map<int, int> countMap;
//     for (int i = 0; i < n; i++)
//     {
//         countMap[arr[i]]++;
//     }

//     map<int, int>::iterator it = countMap.begin();
//     for (it; it != countMap.end(); it++)
//     {
//         cout << it->first << " : " << it->second << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int m;
//     cin >> m;
//     int arr1[m];
//     for(int i=0;i<m;i++){
//         cin >>arr1[i];
//     }
//     int p=0;
//     int arr3[n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i]==arr1[j]){
//                 arr3[p++] = arr[i];
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<p;i++){
//         cout << arr3[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int m;
//     cin >>m;
//     int arr1[m];
//     for(int i=0;i<m;i++){
//         cin >> arr1[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j = j+1;j<n;j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i] , arr[j]);
//         }
//     }
//     }
//     for(int i=0;i<m;i++){
//         for(int j = j+1;j<m;j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i] , arr[j]);
//         }
//     }
//     }

//         int arr3[n+m];
//         int p=0;
//         for(int i=0;i<n;i++){
//             arr3[p++] = arr[i];
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(arr3[p++] == arr1[i]){
//                     break;
//                 }
//                 else{
//                     arr3[p] = arr1[i];
//                 }
//             }
//         }
//         for(int i=0;i<p;i++){
//             cout << arr3[i] << " ";
//         }

//     }
//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the n ";
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     // int freq[n+1] = {0};
//     vector<int> freq;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=1;i<freq.size();i++){
//         if(freq[i]>0){
//             cout << i <<  " | " << freq[i] ;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Size : ";
//     cin >> n;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         arr.push_back(a);
//     }
//     map<int, int> countMap;
//     for (int i = 0; i < n; i++)
//     {
//         countMap[arr[i]]++;
//     }

//     map<int, int>::iterator it = countMap.begin();
//     for (it; it != countMap.end(); it++)
//     {
//         cout << it->first << " : " << it->second << endl;
//     }

//     return 0;
// }

// duplicate****************

// #include <iostream>
// #include<vector>
// #include<map>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size: " << endl;
//     cin >> n;
//     vector<int>arr;
//     for(int i =0; i<n;i++){
//         int a;
//         cin >> a;
//         arr.push_back(a);
//     }
//     map<int,int>count;
//     for(int i=0;i<n;i++){
//         count[arr[i]]++;
//     }
//     map<int,int>::iterator it = count.begin();
//     for(it; it != count.end();it++){
//         cout << it->first <<" |" << it->second<<endl;

//     }
//     return 0;
// }

//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//     string str;
//     getline(cin,str);
//     int k;
//     cin >>k;
//     string str1;
//     int p=0;
//     for(int i=k;i<str.length();i++){
//         str1 += str[i];
//     }
//     for(int i=0;i<k;i++){
//         str1 += str[i];
//     }
//     cout << str1;
//     return 0;
//  }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter row : ";
//     cin >>n;
//     int m;
//     cout << "Enter coloum : ";
//     cin>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
//     int p,q;
//     cin >> p>>q;
//     int brr[p][q];
//      for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cin >> brr[i][j];
//         }
//         cout << endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     if(n!=p){
//         cout << "invalid"<<endl;
//     }
//     int res[m][q];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             res[i][j] = 0;
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             for(int k=0;k<n;k++){
//             res[i][j] += arr[i][k] * brr[k][j];
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<q;j++){
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the row: " <<endl;
//     cin >> n;
//     int m;
//     cout << "Enter the col: " <<endl;
//     cin >> m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
//     }
//      int p;
//     cout << "Enter the row: " <<endl;
//     cin >> p;
//     int q;
//     cout << "Enter the col: " <<endl;
//     cin >> q;
//     int brr[p][q];
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cin >> brr[i][j];
//         }
//     }
//     if(n!=p){
//         cout << "invalid" << endl;
//     }
//     for(int i=0;i<p;i++){
//         for(int j=0;j<q;j++){
//             cout << arr[i][j]+brr[i][j] <<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the row: " <<endl;
//     cin >> n;
//     int m;
//     cout << "Enter the col: " <<endl;
//     cin >> m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
//     }
//     //  int p;
//     // cout << "Enter the row: " <<endl;
//     // cin >> p;
//     // int q;
//     // cout << "Enter the col: " <<endl;
//     // cin >> q;
//     // int brr[p][q];
//     // for(int i=0;i<p;i++){
//     //     for(int j=0;j<q;j++){
//     //         cin >> brr[i][j];
//     //     }
//     // }
//     // if(n!=p){
//     //     cout << "invalid" << endl;
//     // }
//     int pri = 0;
//     int sec =0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==j){
//             pri += arr[i][j];
//             }
//             if((i+j) == (n-1)){
//                 sec += arr[i][j];

//             }
//         }
//         cout << endl;
//     }
//     cout << pri<<" " << sec <<endl;

//     return 0;
// }

// postfix code****************

// #include <iostream>
// #include <stack>
// using namespace std;
// bool isnumber(char str){
//         if((str == '0')||(str == '1')||(str == '2')||(str == '3')||(str == '4')||(str == '5')||(str == '6')||(str == '7')||(str == '8')||(str == '9')){
//             return true;
//         }
//         else{
//             return false;
//         }
// }
// int main()
// {
//     string str;
//     cout << "Enter the string: " << endl;
//     getline(cin, str);

//     stack<int> s;
//     for (int i = 0; i <str.length(); i++)
//     {
//         if (isnumber(str[i]))
//         {
//             s.push(str[i]-'0');
//         }
//         else
//         {
//             int val1 = s.top();
//             s.pop();
//             int val2 = s.top();
//             s.pop();

//             switch (str[i])
//             {
//             case '+':
//                 s.push(val2 + val1);
//                 break;
//             case '-':
//                 s.push(val2 - val1);
//                 break;
//             case '*':
//                 s.push(val2 * val1);
//                 break;
//             case '/':
//                 s.push(val2 / val1);
//             }
//         }
//     }
//     cout << s.top();

//     return 0;
// }

// infixcode ***************


// #include <iostream>
// #include <stack>
// using namespace std;
// bool isnumber(char str){
//         if((str == '0')||(str == '1')||(str == '2')||(str == '3')||(str == '4')||(str == '5')||(str == '6')||(str == '7')||(str == '8')||(str == '9')){
//             return true;
//         }
//         else{
//             return false;
//         }
// }
// int main()
// {
//     string str;
//     cout << "Enter the string: " << endl;
//     getline(cin, str);

//     stack<int> s;
//     for (int i = str.length()-1; i>=0; i--)
//     {
//         if (isnumber(str[i]))
//         {
//             s.push(str[i]-'0');
//         }
//         else
//         {
//             int val1 = s.top();
//             s.pop();
//             int val2 = s.top();
//             s.pop();

//             switch (str[i])
//             {
//             case '+':
//                 s.push(val2 + val1);
//                 break;
//             case '-':
//                 s.push(val1 - val2);
//                 break;
//             case '*':
//                 s.push(val2 * val1);
//                 break;
//             case '/':
//                 s.push(val1 / val2);
//             }
//         }
//     }
//     cout << s.top();

//     return 0;
// }

// validparenthises **************
// #include <iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "Enter the string: " <<endl;
//     getline(cin,str);
//     stack<int>s;

//     for(int i=0;i<str.length();i++){
//         if(s.empty()){
//             s.push(str[i]);
//         }
//         else if((s.top() =='(' &&  str[i] == ')' ) || (s.top() == '[' && str[i] == ']') || (s.top() == '{' && str[i] == '}')){
//             s.pop();
//         }
//         else{
//             s.push(str[i]);
//         }
        
//     }
//     if(s.empty()){
//             cout << "true";
//         }
//         else{
//             cout << "false";
//         }
//     return 0;
// }

// union***********************
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int m;
//     cin >>m;
//     int arr1[m];
//     for(int i=0;i<m;i++){
//         cin >>arr1[i];
//     }

//     int i=0 , j=0;
//     int arr3[100000] = {0};
//     while(i<n){
//         arr3[arr[i]]++;
//         i++;
//     }
//     while(j<m){
//         arr3[arr1[j]]++;
//         j++;
//     }
//     for(int i=1;i<100000;i++){
//         if(arr3[i] > 1){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


// #include <iostream>
// #include<stack>
// using namespace std;
// bool isnumber(char str){
//     if((str == '0')||(str == '1')||(str == '2')||(str == '3')||(str == '4')||(str == '5')||(str == '6')||(str == '7')||(str == '8')||(str == '9')){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main()
// {
//     string str;
//     getline(cin,str);
//     stack<int>s;
//     for(int i=0;i<str.length();i++){
       
//          if(isnumber(str[i])){
//             s.push(str[i]-'0');
//         }
//         else {
//             int val1 = s.top();
//             s.pop();
//             int val2 = s.top();
//             s.pop();
//             switch(str[i]){
//                 case '+': s.push(val2+val1);
//                 break;
//                 case '-': s.push(val2-val1);
//                 break;
//                 case '*' : s.push(val2*val1);
//                 break;
//                 case '/': s.push(val2/val1);
//                 break;
//             }
//         }
//     }
//             cout << s.top();
//     return 0;

// string rotation
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);
//     for(int i=str.length();i>=0;i--){
//         cout << str[i];
//     }
//     return 0;
// }

// wave printing
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size of n: "<<endl;
//     cin>>n;
//     int m;
//     cout << "Size of m: " << endl;
//     cin >>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout<<endl;
//     }
//     cout <<endl;

//     for(int j=0;j<m;j++){
//         if(j%2 == 0){
//             for(int i=0;i<m;i++){

//             cout << arr[i][j] <<" ";
//             }
//         }
//         else{
//             for(int i=m-1;i>=0;i--){
//                 cout << arr[i][j] <<" ";
//             }
//         }
//     }
//     return 0;
// }

// sum of diagonal element
// #include <iostream>
// using namespace std;
// int main()
// {
//      int n;
//     cout << "Size of n: "<<endl;
//     cin>>n;
//     int m;
//     cout << "Size of m: " << endl;
//     cin >>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout <<endl;
//     }

//     int sum = 0;
//     int num =0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==j){
//                 sum += arr[i][j]; 
//             }
//             if((i+j) == (n-1)){
//                 num += arr[i][j];
//             }
//         }
//     }
//     cout << sum <<" " << num;
//     return 0;
// }

// case convert
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);
//     for(int i=0;i<str.length();i++){
//         if(str[i] >= 'a' && str[i] <= 'z'){
//               str[i] -= 32;
//         }
//         else if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] += 32;
//         }
//     }
//     cout << str;;
// return 0;
// }    

// neeraj st3
// #include <iostream>
// using namespace std;
// class Animal{
//     public:
//     void makesound(){
//         cout << "make sound"<<endl;
//     }
// };
// class lion :public Animal {
//     public:
//     void makesound(){
//         cout << "Roar" <<endl;
//     }
// };
// class Elephant : public Animal {
//     public:
//     void makesound(){
//         cout << "Trumpet" <<endl;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Enter the number: "<<endl;
//     cin >>n;
//     Animal a1;
//     lion l1;
//     Elephant e1;
//     if(n==1){
//         l1.makesound();
//     }
//     else if(n==2){
//         e1.makesound();
//     }
//     else{
//         cout << "Invalid" << endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class comp{
//     public:
//     int r;
//     int i;
//     comp(){
//         r =0;
//         i =0;
//     }
//     comp(int r,int i){
//         this->r = r;
//         this->i = i;
//     }
//     // if we want to give the value in the class then we these constructor is mandatory if we remove the fisrt constructor then is will show the error 
//     void getdata(){
//         cin >> r >> i;
//     }
//     comp operator +(comp a){
//         comp c;
//         c.r = r + a.r;
//         c.i = i + a.i; 
//         return c;
//     }
//     comp operator - (comp z){
//         comp y;
//         y.r = r - z.r;
//         y.i = i - z.i;
//         return y; 

//     }
//     void display(){
//         cout << "real "<< " " << r << " img "<<" " << i <<endl;
//     }

// };
// int main()
// {
//     // this is also a method to take the value if we have a constructor call and another method is we can make the call in the class only and we can use the getdata comand;
//     // int r,i;
//     // cin >> r>>i;
//     // comp a(r,i);
//     // cin >> r>>i;
//     // comp b(r,i);
//     // comp c;
//     comp a,b,c,y;
//     a.getdata();
//     b.getdata();
//     c = a+b;
//     y = a-b;
//     a.display();
//     b.display();
//     c.display();
//     y.display();

    
//     return 0;
// }

// feet and inch addition
// #include <iostream>
// using namespace std;
// class abc{
//     public:
//     double feet;
//     double inch;
//     abc(){
//         feet =0;
//         inch =0;
//     }
//     abc(double feet ,double inch){
//         this->feet = feet;
//         this->inch = inch;
//     }
//     void getdata(){
//         cout << "Enter feet: ";
//         cin >> feet;
//         cout << "Enter inch: ";
//         cin >>inch;
//     }

//     void can(){
//         if((inch == 12)){
//             cout << feet+1 << "'" << inch-12 << '"'<<endl;
//         }
//         else if(inch == 24){
//             cout << feet+2 << "'" << inch-24 << '"'<<endl;
//         }
//         else if(inch >12){
//             cout << feet+1 << "'" << inch-12 << '"'<<endl;
//         }
//         else if(inch<=12){
//             cout << feet << "'" << inch << '"' <<endl;
//         }
//     }
//     abc operator + (abc a){
//         abc c;
//         c.feet = this->feet + a.feet;
//         c.inch = this->inch + a.inch;
//         return c;
//     }
//     abc operator - (abc x){
//         abc z;
//         z.feet = this->feet - x.feet;
//         z.inch = this->inch - x.inch;

//     if(z.feet<0){
//         z.feet = -z.feet;
//     }
//     else if (z.inch<0){
//         z.inch = -z.inch;
//     }
//         return z;
        
//     }
// };
// int main()
// {
//     abc a1,b,c1, z;
//     a1.getdata();
//     b.getdata();
//     c1 = a1 + b;
//     z = a1-b;
//     c1.can();
//     z.can();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class matrix{
//     public:
//     int n;
//     int m;
//     int arr[n][m];
//     void getdata(){
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cin >> arr[i][j];
//             }
//         }
//     }
//     matrix operator + (matirx z){
//         matrix y;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 y.arr[i][j] = arr[i][j] + z.[arr[i][j]];
//             }
//         }
//         return y;
//     }
// };
// int main()
// {
    
//     return 0;
// }

// #include <iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);

//     stack<int>s;
//     for(int i=0;i<str.length();i++){
//         if(s.empty()){
//             s.push(str[i]);
//         }
//         else if((s.top() == '(' && str[i] == ')') ||(s.top() == '[' && str[i] == ']')||(s.top() == '{' && str[i] == '}' )){
//             s.pop();
//         }
//         else{
//             s.push(str[i]);
//         }
//     }
    
//         if(s.empty()){
//             cout << "yes";
//         }
//         else{
//             cout << "no";
//         }
    
//     return 0;
// }

// #include <iostream>
// #include<stack>
// using namespace std;
// bool isnumber(char str){
//     if((str == '0')||(str == '1')||(str == '2')||(str == '3')||(str == '4')||(str == '5')||(str == '6')||(str == '7')||(str == '8')||(str == '9')){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main()
// {
//     string str;
//     getline(cin,str);
//     stack<int>s;
//     for(int i=0;i<str.length()-1;i++){
//         if(isnumber){
//             s.push(str[i]-'0');
//         }
//         else {
//             int val1 = s.top();
//             s.pop();
//             int val2 = s.top();
//             s.pop();
//             switch(str[i]){
//                 case '+' : s.push(val2+val1);
//                 break;
//                 case '-': s.push(val2-val1);
//                 break;
//                 case '*' : s.push(val2*val1);
//                 break;
//                 case '/': s.push(val2/val1);
//                 break;
//             }
//         }
//     }
//     cout << s.top();


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int occ[n] = {0};
//     for(int i=0;i<n;i++){
//         occ[arr[i]]++;
//     }
//     for(int i=1;i<n;i++){
//         if(occ[i] >1){
//         cout << i << "|" << occ[i] <<endl;
//         }
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

//    // for(int i=0;i< size1+size2;i++){
//    // }
//    for(int i=0;i< size1+size2;i++){
//       cout << arr3[i] << " ";
//    }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: " << endl;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int k;
//     cout << "Element to be deleted: " <<endl;
//     cin >>k;
//     for(int i=0;i<n;i++){
//         if(arr[i]== k){
//             continue;
//         }
//         else{

//         cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int found(int arr[] ,int n,int m){
//     for(int i=0;i<n;i++){
//         if(arr[i] == m){
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     int m;
//     cin >>m;
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int result = found(arr,m);
//     if(result != -1){
//         cout << result;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin >> n;
//     int arr[100];
//     for(int i=0;i<n;i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target)
//         {
//             cout << " Found " << i;
//             break;
//         }
//     }
// }
// left rotate *********************
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int k;
//     cin >>k;
//     int arr1[n];
//     int p=0;
//     for(int i=k-1;i<n;i++){
//         arr1[p++] = arr[i];
//     }
//     for(int i=0;i<k;i++){
//         arr1[p++] = arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout << arr1[i] << " ";
//     }
//     return 0;
// }


// // Right rotation/******************************
// #include<iostream>
// using namespace std;
// int main(){
//     int n,arr[100],d,k,temp[100];
    
//     cout<<"enter size of array";
//     cin>>n;
//     cout<<"value of k";
//     cin>>k;
    
//     k=k%n;;
//     cout<<"enter array  elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         if(i<k){
//             cout<<arr[n+i-k]<<" ";
//         }
//         else{
//             cout<<arr[i-k]<<" ";
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the n: " <<endl;
//     cin >>n;
//     int m;
//     cout << "Enter the m: "<<endl;
//     cin >>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         cout << arr[i] << " ";
//     }
    
// }

// sum of diagonal element*************
// #include <iostream>
// using namespace std;
// int main()
// {
//      int n;
//     cout << "Size of n: "<<endl;
//     cin>>n;
//     int m;
//     cout << "Size of m: " << endl;
//     cin >>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout <<endl;
//     }

//     int sum = 0;
//     int num =0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==j){
//                 sum += arr[i][j]; 
//             }
//             if((i+j) == (n-1) && (i!=j)){
//                 num += arr[i][j];
//             }
//         }
//     }
//     cout << sum + num;
//     return 0;
// }


// sparce matrix *******
// #include <iostream>
// using namespace std;
// int main()
// {
//      int n;
//     cout << "Size of n: "<<endl;
//     cin>>n;
//     int m;
//     cout << "Size of m: " << endl;
//     cin >>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout <<endl;
//     }
//     int count =0;
//     int num =0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j] == 0){
//                 count++;
//             }
//             // else{
//             //     num++;
//             // }
//         }
//     }
//     // if(count > num){
//     //     cout <<"yes";
//     // }
//     // else{
//     //     cout << "no";
//     // }

//     if(count > (n*m)/2){
//         cout << "yes";
//     }
//     else{
//         cout << "NO";
//     }



//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin,str);
//     int n = str.length();
//    if(n < 5 && n > 15){
//     exit(0);

//    }
//    bool special = false;
//    for(int i=0;i<n;i++){
//     // if((str[0] >= 'a' && str[0] <= 'z')){

//         if(!(str[i] == '_') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')){
//             // cout << "YES";
//             // break;
//             // }
//             // else{
//             //     cout << "NO";
//             //     break;
//             // }
//             // cout << "NO";
//             special = true;
//             break;
//         }
//         // else{
//         //     cout << "NO";
//         //     break;
//         // }
//    }
//    if(special){
//     cout << "NO";
//    }
//    else{
//     cout << "YES";
//    }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    string str,abc;
    getline(cin,str);
    getline(cin,abc);
    string a;
    a = a+str;
    a = a + ' ';
    a = a+abc;

    cout << a;
    return 0;
}

// // /Right rotation/
// #include<iostream>
// using namespace std;
// int main(){ko 
//     int n,arr[100],d,k,temp[100];
    
//     cout<<"enter size of array";
//     cin>>n;
//     cout<<"value of k";
//     cin>>k;
    
//     k=k%n;;
//     cout<<"enter array  elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         if(i<k){
//             cout<<arr[n+i-k]<<" ";
//         }
//         else{
//             cout<<arr[i-k]<<" ";
//         }
//     }

// }



// /Left Rotation/

// #include<iostream>
// using namespace std;
// int main(){
//     int n,arr[100],d,k=0,temp[100];
    
//     cout<<"enter size of array";
//     cin>>n;
    
//     cout<<"enter from which you rotate";
//     cin>>d;
    
//     cout<<"enter array  elements";
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
    
//     for(int i=d;i<n;i++)
//     {
//         temp[k]=arr[i];
//         k++;
//     }
    
//     for(int i=0;i<d;i++)
//     {
//         temp[k]=arr[i];
//         k++;
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         cout<<temp[i]<<" ";
//     }
//     return 0;
// }

// left rotate *********************
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >>arr[i];
//     }
//     int k;
//     cin >>k;
//     int arr1[n];
//     int p=0;
//     for(int i=k-1;i<n;i++){
//         arr1[p++] = arr[i];
//     }
//     for(int i=0;i<k;i++){
//         arr1[p++] = arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout << arr1[i] << " ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void maxsum(int arr[][100],int n,int m){
//     int max=INT16_MIN;
//     int rowindex=-1;
//     for(int j=0;i<n;j++){
//         int sum=0;
//         for(int i=0;j<m;i++){
//             sum+=arr[i][j];
//         }
//         if(max<sum){
//             max=sum;
//             rowindex=i;
//         }
//     }
//     cout<<"the maximum sum of row is"<<max<<" " << "with index" << rowindex;

// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[100][100];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     maxsum(arr,n,m);
// }

// #include <iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int arr1[5] = {6,7,8,9,10};
   
//     int arr3[10];
//     int i;
//     for(i=0;i<5;i++){
//         arr3[i] = arr[i];
//     }
//     for(int j=0;j<5;j++){
//         arr3[i++] = arr1[j];
//     }
//      sort(arr3, arr3+10);
//      cout << arr3[10/2];
//     return 0;
// }
// wave printing
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Size of n: "<<endl;
//     cin>>n;
//     int m;
//     cout << "Size of m: " << endl;
//     cin >>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout<<endl;
//     }
//     cout <<endl;
//     for(int i=0;i<n;i++){
//         if(i%2 == 0){
//             for(int j=0;j<m;j++){

//             cout << arr[i][j] <<" ";
//             }
//         }
//         else{
//             for(int j=m-1;j>=0;j--){
//                 cout << arr[i][j] <<" ";
//             }
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
class date{
    private:
    int date ,year;
    int month;
    public:
    date(int d, int m, int y);
        day(d),
        month(m),
        year(y){};

    void setdate(int d,int m,int y){
        day = d;
        month = m;
        year = y;
    }
    void input(){
        cin >> day >> month >> year;
    }
     bool checkdate(){
        if(day < 1 && day > 31){
            return false;
        }
        if(month < 1 && month > 11){
            return false;
        }
        if(day == 31){
            if((month == 4) || (month == 6) || (month == 9) || (month == 11)){
                return false;
            }
        }
        if(month == 2){
            if((year%4 == 0 && year%100 != 0) || (year%400 == 0) ){
                if(day>29){
                    return false;
                }
                else if(day>28){
                    return false;
                }
            }
        }
            return true;
     }
};
int main()
{
    date Date(0,0,0);
    Date.input();
    if(Date.checkdate()){
        cout << "valid";
    }
    else{
        cout <<"invalid";
    }
    return 0;
}