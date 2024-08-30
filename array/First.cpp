// #include<iostream>
// using namespace std;
// int main(){
// cout << "namaste duniya" <<endl;
// cout << "namaste duniya";

// int a = 123;
// cout << a <<endl;

//  char b = 'v';
//  cout << b<<endl;

//  bool bl = true;
//  cout << bl <<endl;

//  float f =1.2;
//  cout << f <<endl;

//  double d = 1.23;
//  cout << d <<endl;

//  int size = sizeof(a);
//  cout << "size of a is " << size <<endl;

//  int a= 'a';
//  cout << a <<endl;

//  char ch = 98;
//  cout << ch <<endl;

//  char ch1 = 123456;
//  cout << ch1 <<endl;

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // cout<< n <<endl;
//     cout<< "hello" <<endl;
// }

// conditional statements
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     // cout << "value of n is : " << a << endl;
//     if (a>0){
//         cout << "A is positive" <<endl;
//     }
//     else {
//         cout << "A is negetive";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b ;
//     cout <<" Enter the value of a" << endl;
//     cin>>a;
//     cout<<"Enter the value of b" <<endl;
//     cin>>b;
//     if (a>b){
//         cout<<"A is greater";
//     }
//     if(b>a){
//         cout << "B is greater";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "Enter the value of a"<< endl;
//     cin>>a;
//     if (a>0){
//         cout<< "positive";
//     }
//    else if (a<0){
//         cout<<"negetive";
//     }
//     else{
//         cout<< "0" <<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout << "Enter a character" << endl;
//    char ch;
//    cin >> ch;
//    if ('a'<= ch && ch <= 'z')
//    {
//     cout <<" this is lower case" << endl;
//    }
//    else if ('A'<= ch && ch <= 'Z')
//    {
//     cout << " this is uppercase "<< endl;
//    }
//    else if ('0'<= ch && ch <= '9') {
//     cout << "this is numeric" << endl;
//    }
//    else {
//     cout << "other"<< endl;
//    }

// }

// #include <iostream>
// using namespace std;

// string categorizeInput(char character) {
//     if ('a' <= character && character <= 'z') {
//         return "Lowercase";
//     } else if ('A' <= character && character <= 'Z') {
//         return "Uppercase";
//     } else if ('0' <= character && character <= '9') {
//         return "Numeric";
//     } else {
//         return "Other";
//     }
// }

// int main() {
//     char userInput;
//     cout << "Enter a character: ";
//     cin >> userInput;

//     string category = categorizeInput(userInput);
//     cout << "The input '" << userInput << "' is " << category << "." << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number"<<endl;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         cout<< i <<endl;
//         i=i+1;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i =1;
//    int sum =0;
//     while(i<=n){
//         sum = sum+i;
//         i=i+1;
//     }
//         cout<<"the sum is " << sum <<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 2;
//     int sum = 0;
//     while(i<=n){
//         if(i%2==0){
//             sum = sum+i;
//         }
//         i=i+1;
//     }
//     cout<<"this sum is "<< sum << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float f,c;
//     cin >>f;
//     c= (f-32)*5/9;
//     cout << "temp " << c<<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =2;
// while(i<n){
//     if(n%i==0){
//         // cout << "prime number";
//         cout<< "prime for"<< i <<endl;
//     }
//     else{
//         // cout<< " not prime";
//         cout<<" not prime for"<<i <<endl;
//     }

//     i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<< "*";
//             j= j+1;
//         }
//         cout << endl;
//         i =i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<< i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<< j;
//             j = j+1;

//         }
//         cout << endl;
//         i=i+1;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << n-j+1;
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int count =1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << count <<"  ";
//             count =count+1;
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << "*";
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << i;
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=4;
//         while(j>=i){
//             cout << "*";
//             j=j-1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout << "*";
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
//     int v = 1;
//     while(v<=n){
//         int j=4;
//         while(j>=v){
//             cout << "*";
//             j=j-1;
//         }
//         cout << endl;
//         v = v+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count =1;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout <<count << " " ;
//             count =count+1;
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         int value = i;
//         while(j<=i){
//             cout <<value<< " " ;
//             value =value-1;
//             j=j+1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A' + i - 1;
//             cout << ch;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A' + j - 1;
//             cout << ch<< " ";
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     char ch = 'A';
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << ch<< " ";
//             ch = ch+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//         char ch = 'A' ;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << ch<< " ";
//             ch = ch+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//         char ch = 'A'+i-1 ;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << ch<< " ";
//             ch = ch+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char value = 'A' + i -1;
//         while(j<=n){
//             cout << value<< " ";
//             value = value+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char value = 'A'+i-1;
//         while(j<=i){
//             cout << value<< " ";
//             // value = value+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//         char value = 'A';
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << value<< " ";
//             value = value+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char value = 'A' +i -1;
//         while(j<=i){
//             cout << value<< " ";
//             value = value+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char value = 'D' -i + 1;
//         while(j<=i){
//             cout << value<< " ";
//             value = value+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char value = 'A'+ i-1;
//         while(j<=n){
//             cout << value<< " ";
//             value = value+1;
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout << " " ;
//             space =space-1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout <<'*';
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         // int space = n-i+1;
//         // while(space){
//         //     cout << " " ;
//         //     space =space+1;
//         // }
//         int j = 4;
//         while(j<=i){
//             cout <<'*';
//             j = j-1;
//         }
//         cout<< endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         // print space kro
//         int space = n-i;
//         while(space){
//             cout << ' ';
//             space = space-1;

//         }
//         // print 1st triangle
//         int j = 1;
//         while(j<=i){
//             cout <<j;
//             j=j+1;
//         }
//         // print 2nd triangle
//         int start = i-1;
//         while(start){
//             cout << start;
//             start = start-1;
//         }
//         cout << endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4;
//     int b = 6;

//     cout<< "  a&b "<< (a&b)<< endl;
//     cout << " a|b " << (a|b) << endl;
//     cout << " a~b " << (~a) << endl;
//     cout << " a^b " << (a^b) << endl;

//     cout << (17>>1)<<endl;
//     cout <<(17>>2)<<endl;
//     cout << (19<<1) << endl;
//     cout << (21<<2) << endl;

//     int i = 7;
//     cout << (++i) <<endl;
//     cout << (i++) << endl;
//     cout << (i--) << endl;
//     cout << (--i) << endl;

// }

// #include<iostream>
// using namespace std;
// int main() {
// int a,b= 1;
// a =10;
// if(++a)
// cout << b;
// else
// cout << ++b;

// int a =1;
// int b = 2;
// if (a-- >0 && ++b > 2){

//     cout << "stage1" << endl;
// }
// else {
//     cout << "stage2" <<endl;
// }
// cout << a << " "<< b << endl;

//  int a =1;
// int b = 2;
// if (a-- >0 || ++b > 2){

//     cout << "stage1" << endl;
// }
// else {
//     cout << "stage2" <<endl;
// }
// cout << a << " "<< b << endl;

// int number = 3;
// cout << 25 * (++number);

//     int a = 1;
//     int b = a++;
//     int c = ++a ;
//     // int c = ++a;
//     cout << b << endl;;
//     cout << c << endl;;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout << "Enter the number" << endl;
//     cin >>n;
//     for(int i=1;i<=n;i++){
//         cout << i << endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int sum =0;
//     cout << "Enter the number" << endl;
//     cin >>n;
//     for(int i = 1;i<=n;i++){
//         sum = sum+i;
//     }
//         cout << sum << endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int a= 0;
//     int b =1;
//     cout <<a << " " << b << " ";
//     for(int i =1; i<=n; i++){
//         int netnumber =a+b;
//         cout << netnumber << " ";
//         a = b ;
//         b= netnumber;

//     }
// }

// PRIME NUMBER
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number" << endl;
//     cin>>n;
//     bool isprime =1;
//     for(int i = 2; i<n;i++){
//         if (n%i==0){
//             // cout << " not prime" << endl;
//             isprime =0;
//             break;
//         }
//     }
//       if(isprime ==0){
//         cout<< "not a prime number";
//       }
//       else{
//         cout<< "prime number";
//       }
//         }

// #include<iostream>
// using namespace std;
// int main(){
//     // int n;
//     // cin >> n;
//     for(int i =2 ; i<=15; i++){
//         // cout << "hi" << endl;
//         // cout << " hey" << endl;
//         // continue;
//         // cout << " reply me" ;
//         cout << i << endl;
//         if (i&1){
//             continue;
//         }
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 0; i<5; i++){
//         for(int j =i; j<=5; j++){
//             if (i+j == 10){
//                 break;
//             }
//             cout << i << " "<< j << endl;
//         }
//     }
// }

// scope of variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 3;
//     cout << a << endl;
//     if(true){                   // int this the value of is present in this block only if we use  this "a" out of block then it will show error "if the variable is define int he block then its precence is defined in that block only outside that block it is useless or it will show error"
//         int a = 5;
//         cout << a << endl;
//     }
//     cout << a << endl;
// }

// leatcode problem 1281
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int prod = 1;
//     int sum = 0;
//     while(n!=0){
//         int digit = n%10;
//         prod = prod*digit;
//         sum = sum + digit;
//         n = n/10;
//     }
//     int answer = prod-sum;
//    cout << answer << endl;
// }

// leatcode 191(not done)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     while(n!=0){
//     if (n&1){
//         count++;
//     }
//     n= n>>1;
//     }
//     cout << count;
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

// leat code problem reverse integer

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int ans =0;
//     int digit;
//     while(n!=0){
//         digit = n%10;
//         ans = ans*10 + digit;
//         n= n/10;
//     }
//     cout << ans <<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int sum = 0;
//     while(n!=0){
//         int digit = n%10;
//         sum = sum + digit;
//         n = n/10;
//     }
//     cout<< sum;
// }

// switch

// #include<iostream>
// using namespace std;
// int main(){
//     // char ch = "1"
//     int num =1;
//     cout << endl;
//     switch( num ){
//         case 1 : cout << "first"<< endl;
//         break;

//         case 2: cout << " second" << endl;
//         break;

//         default : cout << " its a default value" << endl;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch = '1';
//     int num =1;
//     cout << endl;
//     switch( ch ){
//         case 1 : cout << "first"<< endl;
//         break;

//         case '1': switch(num){
//             case 1: cout << "the value of num is " << num  << endl;
//         break;
//         }
//         break;

//         default : cout << " its a default value" << endl;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout << "enter the values of a and b" <<endl;
//     cin >> a >> b;
//     char op;
//     cout << "enter the op" << endl;
//     cin >> op;
//     switch( op ) {

//         case '+' :cout << (a+b) << endl;
//                  break;

//         case '-' :cout<<  (a-b) << endl;
//                 break;

//         case '*' : cout << (a*b) << endl;
//                 break;

//         case '/' : cout << (a/b) << endl;
//                     break;

//         case '%' : cout << (a%b) << endl;
//                 break;

//         default : cout << "enter the valid operation" << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 1330;
//     switch( n ) {

//         case 1 :cout << n/100 << endl;
//                     int rest = n- n/100;
//                  break;
//     }
// }

//         case 2 : if(rest/50==0){

//         };
//                 break;

//         case '*' : cout << (a*b) << endl;
//                 break;

//         case '/' : cout << (a/b) << endl;
//                     break;

//         case '%' : cout << (a%b) << endl;
//                 break;

//         default : cout << "enter the valid operation" << endl;
//     }
//     return 0;
// }

// #include <iostream>

// int main() {
//     int amount = 1330;
//     int hundred_notes = 0, fifty_notes = 0, twenty_notes = 0, ten_notes = 0;

//     switch (amount / 100) {
//         case 0:
//             break;
//         default:
//             hundred_notes = amount / 100;
//             amount %= 100;
//     }

//     switch (amount / 50) {
//         case 0:
//             break;
//         default:
//             fifty_notes = amount / 50;
//             amount %= 50;
//     }

//     switch (amount / 20) {
//         case 0:
//             break;
//         default:
//             twenty_notes = amount / 20;
//             amount %= 20;
//     }

//     switch (amount / 10) {
//         case 0:
//             break;
//         default:
//             ten_notes = amount / 10;
//             amount %= 10;
//     }

//     std::cout << "100 Rs notes: " << hundred_notes << std::endl;
//     std::cout << "50 Rs notes: " << fifty_notes << std::endl;
//     std::cout << "20 Rs notes: " << twenty_notes << std::endl;
//     std::cout << "10 Rs notes: " << ten_notes << std::endl;

//     return 0;
// }

// functions

// #include<iostream>
// using namespace std;

// int power(int num1, int num2){

//     int ans = 1;

//     for(int i = 1; i<=num2; i++){
//         ans = ans * num1;
//     }
//     return ans;
// }

// int main(){
//     int a,b;
//     cout << " enter the values of a,b" << endl;

//      cin >> a >> b;

//      int answer = power(a,b);

//      cout << "answer is " << answer << endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;

// bool isEven(int a){
//     if (a%2==0){
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main(){

//     int a;
//     cout << "enter the number" << endl;
//     cin >> a;

//     if (isEven(a)){
//         cout << "number is even" << endl;
//     }
//     else {
//         cout << "number is odd" << endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r){

//     int num = factorial(n);

//     int dum = factorial(r) * factorial(n-r);

//     return num/dum;
// }

// int main(){
//     int n ,r;

//     cout << "Enter the value of n and r" << endl;

//     cin >> n >> r;

//     cout << "answer is " << nCr(n, r) << endl;

// }

// #include<iostream>
// using namespace std;

// void counting(int n){

//     for(int i=1; i<=n; i++){
//         cout << i << endl;
//     }
// }

// int main(){

//     int n;
//     cout << "enter the value" << endl;
//      cin >> n;

//      counting(n);

//      return 0;

// }

// #include<iostream>
// using namespace std;

// bool isprime(int n){
//     for(int i= 2; i<n; i++){
//         if(n%i == 0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){

//     int n;
//     cout << "enter the value" << endl;
//     cin >> n;

//     if(isprime(n)){
//         cout << "prime" << endl;
//     }
//     else {
//         cout << "not prime" << endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int ap(int n){

//     int ans = 3*n + 7;
//     return ans;
// }

// int main(){
//     int n;
//     cout << "Enter the value" << endl;
//     cin >> n;

//     cout << ap(n) << endl;

// }

// #include<iostream>
// using namespace std;

// int fibonacci(int n){
//     int a = 0;
//     int b = 1;

//     for(int i = 2; i <= n; i++){
//         int fibo = a + b;
//         a = b;
//         b = fibo;
//     }
//     return b; // Return the Fibonacci number
// }

// int main(){
//     int n;
//     cout << "Enter the number: " << endl;
//     cin >> n;

//     cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int binaryNumber(int a, int b){

//         }

// int main(){

// }

// #include<iostream>
// using namespace std;
// int update (int a){
//     int ans = a*a;
//     return ans;
// }

// int main(){
//     int a = 14;
//     a= update(a);
//     cout << a <<endl;

// }

// ARRAY START FROM HERE

// #include<iostream>
// #include<climits>
// using namespace std;

// int getMin(int num[] , int n){

//     int min = INT_MAX;

//     for(int i =0; i<n; i++){
//         if(num[i] < min){
//             min = num[i];
//         }
//     }
//         return min;
// }

// int getMax(int num[] , int n) {

//     int max = INT_MIN;

//     for(int i =0; i<n; i++){
//         if(num[i]> max){
//             max = num[i];
//         }
//     }
//         return max;
// }
// int main(){
//     int size;
//     cout<< "enter the size" << endl;
//     cin >> size;

//     int num[100];

//         cout<<"enter the num" << endl;
//     for(int i=0 ; i<size; i++){
//         cin >> num[i];
//     }

//     cout << "Maxium value is " << getMax(num ,size) <<endl;
//     cout << "Minimun value is " << getMin(num ,size) <<endl;

//     return 0;
// }

// array scope

// #include<iostream>
// using namespace std;

// void update(int arr[], int n){
//     cout <<endl << "inside the function"<< endl;

//     // updating arr first element
//     arr[0]= 120;

//     // printing the arr
//     for(int i = 0 ;i<3; i++){
//         cout <<arr[i] << " ";
//     }cout << endl;

//     cout<< "going back to amin function" <<endl;

// }
// int main(){
//     int arr[3] = {1,2,3};

//     update(arr,3);

//     // printing the arr
//     cout << "Printing the main function" << endl;
//     for(int i = 0 ;i<3; i++){
//         cout <<arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sumarr(int arr[] , int size){
//     int sum =0;
//     for(int i= 0; i<size; i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main(){

//     int size;
//     cout << "Enter the size" <<endl;
//     cin >> size;

//     cout << "Enter an element" << endl;

//     int arr[100];
//     for(int i =0; i<size; i++){
//         cin >> arr[i];
//     }
//     sumarr(arr , size);

//     cout << "sum is " << sumarr(arr ,size) << endl;
// }

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int arr[5] = {3, 2, 4, -6, 1};

//     cout << "Enter the element to search for: " << endl;

//     int key;
//     cin >> key;

//     bool found = search(arr,5, key);

//     if (found) {
//         cout << "Key is present" << endl;
//     } else {
//         cout << "Key is absent" << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;

//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

// }
// void printarray(int arr[], int n){
//     for(int i = 0;i<n; i++){
//         cout <<arr[i]<< " ";
//     }
//     cout <<endl;
// }

// int main(){
//     int arr[6] = {1,3,4,5,3,-9};
//     int brr[5] = {1,3,2,4,5};
//     reverse(arr, 6);
//     reverse(brr , 5);

//     printarray(arr,6);
//     printarray(brr, 5);

//    return 0;
// }

// code to swa adj number

// #include<iostream>
// using namespace std;

// void swapadjnumber(int arr[], int size){
//     for(int i=0;i<size-1;i+=2){
//         swap(arr[i],arr[i+1]);
//  }
// }

// int main(){
//     int arr[5]= {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     swapadjnumber(arr, size);

//     for(int i = 0;i<size; i++){
//         cout<< arr[i] <<" ";
//     }
//     return 0;

// }

// OR

// #include<iostream>
// using namespace std;

// void printarray(int arr[], int size){
//     for(int i = 0; i<size;i++){
//         cout << arr[i]<<" ";
//     }cout <<endl;
// }
// void swapalternate(int arr[],int size){
//     for(int i = 0;i<size; i+=2){
//         if(i+1<size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

// int main(){
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int brr[5] = {9,2,3,4,5};

//     swapalternate(arr,8);
//     printarray(arr , 8);
//     cout  <<endl;

//     swapalternate(brr , 5);
//     printarray(brr , 5);

//     return 0;
// }

// find unique

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number" <<endl;
//     cin >> n;
//     int arr[100] ;
//     cout <<" Enter the element"<<endl;
//     for(int i=0;i<n; i++){
//         cin>> arr[i];
//     }
//     int key;
//     cout << "Enter the number you want to check" <<endl;
//     cin >> key;
//     // int brr[100];
//     int count =0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==key){
//         count++;
//         }
//     }

//     cout<< count<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;

//     cout<< "Enter the size"<<endl;
//     cin>>n;

//     int arr[n];
//     int   i,j,k;

//     for(int i =0; i<n; i++){
//         cin>> arr[i];
//     }
//     for(i =0; i<n; i++){
//         for(j= i+1; j<n; j++){
//             for(k =j+1; k<n; k++){
//                 if(arr[i]+arr[j]+arr[k]==12){
//                 }
//             }
//         }
//     }
//                     cout << arr[i]<<" " << arr[j] <<" " <<arr[k]<<" ";

// }

// sort 0&&1

// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void sortone(int arr[], int n)
// {
//     int left = 0, right = n - 1;
//     while (left < right)
//     {

//         while (arr[left] == 0 && left < right)
//         {
//             left++;
//         }
//             while (arr[right] == 1 && left < right)
//             {
//                 right--;
//             }

//                 // arr[left] == 1 && arr[right] == 0
//                 if (left < right)
//                 {
//                     swap(arr[left], arr[right]);
//                     left++;
//                     right--;
//                 }
//     }
// }

// int main()
// {
//     int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

//     sortone(arr, 8);
//     printarray(arr, 8);
// }

// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void sortone(int arr[], int n)
// {
//     int left = 0, right = n - 1;
//     while (left < right)
//     {

//         while (arr[left] == 0 && left < right)
//         {
//             left++;
//         }
//             while (arr[right] == 1 && left < right)
//             {
//                 right--;
//             }

//                 // arr[left] == 1 && arr[right] == 0
//                 if (left < right)
//                 {
//                     swap(arr[left], arr[right]);
//                     left++;
//                     right--;
//                 }
//     }
// }

// int main()
// {
//     int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0,2};

//     sortone(arr, 9);
//     printarray(arr, 9);
// }

// binary search
// #include<iostream>
// using namespace std;

// int binarysearch(int arr[],int size, int key){

//     int start = 0;
//     int end = size-1;
// // is we have much hight value then we can use this also
// // formula also mid = start + (end-start)/2
//     // int mid = (start+end)/2;
//     int mid = start +(end-start)/2;

//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }

//         if(key > arr[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1;

// }

// int main(){

// int even[6] = {2, 4, 5, 6, 7,12};

// int odd[5] = {1,12,13 ,15,20};

// int evenindex = binarysearch(even , 6, 5);

// cout << "index of 5 is " << evenindex <<endl;

// int oddindex = binarysearch(odd , 5, 12);

// cout << "index of 12 is " << oddindex <<endl;

// }

// first occ and last occurance using binary search

// #include <iostream>
// using namespace std;

// int firstocc(int arr[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;

//     mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
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

//     mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == key)
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

//     int even[5] = {1, 2, 3, 3, 5};

//     cout << " first occ of 3 is " << firstocc(even, 5, 3) << endl;

//     cout << " last occ of 3 is " << lastocc(even, 5, 3)<<endl;

//     return 0;
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

// reverse an array

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int>v){
//     int s= 0, e =v.size()-1;

//     while(s<=e){
//         swap(v[s] , v[e]);
//         s++;
//         e--;

//     }
//     return v;
// }
// void print(vector<int>v){
//     for(int i=0;i<v.size();i++){
//         cout << v[i]<<" ";
//     }
//     cout << endl;
// }

// int main(){

//     vector<int>v;

//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans = reverse(v);

//     print(ans);

//     return 0;

// }

// merge tow sorted array

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr1[], int m, int arr2[], int n, int arr3[])
// {
//     int i = 0, j = 0;
//     int k = 0;

//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     // copy first array element
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }

//     // copy remaining element
//     while (j< m)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }

// void print(int ans[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};

//     int arr3[8] = {0};

//     merge(arr1, 5, arr2, 3, arr3);

//     print(arr3, 8);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// char maxocccharacter(string s){
//     int arr[26] = {0};

//     for(int i=0; i<s.length();i++){
//         char ch = s[i];

//         int number  = 0 ;
//         number = ch - 'a';
//         arr[number]++;
//     }
//     int maxi = -1, ans = 0;
//     for(int i=0; i<26;i++){
//         if(maxi < arr[i]){
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     return 'a'+ans;
// }
// int main(){

// string s;
// cin >> s;
// cout << maxocccharacter(s);

// }

// #include <iostream>
// #include<limits.h>
// using namespace std;
// // printing row wise sum
// void printsum(int arr[][3], int row, int col)
// {
//     cout << "printing sum -> " << endl;
//     for (row = 0; row < 3; row++)
//     {
//         int sum = 0;

//         for (int col = 0; col < 3; col++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << endl;
//     }
//     cout << endl;
// }
// // printing co wise sum
// void printcolsum(int arr[][3], int row, int col)
// {
//     cout << "printing sum -> " << endl;
//     for (col = 0; col < 3; col++)
//     {
//         int sum = 0;

//         for (int row = 0; row < 3; row++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << endl;
//     }
//     cout << endl;
// }

// int largestrowsum(int arr[][3], int row , int col){;

//     int maxi = INT_MIN;
//     int rowindex = -1;
//     for (row = 0; row < 3; row++)
//     {
//         int sum = 0;

//         for (int col = 0; col < 3; col++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << endl;

//         if(sum > maxi){
//             maxi =sum ;
//             rowindex = row;
//         }
//     }
//     cout << "maximun number is = > " <<maxi <<  endl;
//     return rowindex;

// }

// int main()
// {

//     int arr[3][3];

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//     cout << "row wise" << endl;
//     printsum(arr, 3, 3);

//     cout << "col wise" << endl;
//     printcolsum(arr, 3,3);

//     int ansindex  = largestrowsum(arr, 3, 3);

//     cout << "max row is at index " << ansindex << endl;
    
// }


// recursion
// #include<iostream>
// using namespace std;

// int factorial(int n){

//     if(n==0){
//         return 1;
//     }
//     int sp = factorial(n-1);
//     int bp = n*sp;
// }

// int main(){

//     int n;
//     cout << "Enter the number ";

//     cin >> n;


//     int ans = factorial(n);

//     cout << ans<<endl;

// }

// #include<iostream>
// using namespace std;
// void reachhome(int src, int dest){
//     if(src== dest){
//         cout << "reach home" << endl;

//     }
//     src++;

//     reachhome(src,dest);
// }

// int main(){

//     int dest = 10 ;
//     int src =1;

//     cout << endl;

//     reachhome(src, dest);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;

//     // int i=0;
//     // while(i<=n){
//     //     int j=0;
//     //     while(j<=i){
//     //         cout << j+1;
//     //         j++;
//     //     }
//     //     cout << endl;
//     //     i++;
//     // }
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<=i){
//             cout <<"* ";
//             j--;
//         }
//         cout << endl;
//         i++;
//     }
// }

// max consecutive one's

// #include<iostream>
// using namespace std;
// int findcon(int arr[], int n){
//     int count =0;
//     int max_count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             count++;
//         }
//         else{
//         count = 0;
//         }
//     }
//     max_count = max(max_count, count);
//     return max_count;
// }

// int main(){
//     int n;
//     cout <<  "enter the size ";
//     cin >> n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     int result = findcon(arr,n);

//     cout << result;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int binarynum[32];
//     int i =0;
//     while(n>0){
//         int rem  = n%2;
//         n =n/2;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--){
//         cout <<binarynum[j];
//     }

// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int binary, decimal = 0, temp, base = 1, rem;

//     cout << "Enter the binary number: ";
//     cin >> binary;

//     for (temp = binary; temp > 0; temp = temp / 10) {
//         rem = temp % 10;
//         decimal = decimal + rem * base;
//         base = base * 2;
//     }

//     cout << "The Binary Value  = " << binary <<endl;
//     cout << "The Decimal Value = " << decimal <<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class loin{
//     public:

//     void makesound(){
//         cout << "Roar" << endl;
//     }};

//     class elephant{
//         public:

//         void makesound(){
//             cout << "trumpet"<< endl;
//         }
//     };

// int main(){
//     int n;
//     cout <<"Enter the choice " ;
//     cin >>n;
//     // int choice;

//     if(n == 1){
//         loin Loin;
//         Loin.makesound();
//     }
//     else if(n==2){
//         elephant Elephant;
//         Elephant.makesound();
//     }
//     else{
//         cout <<"invalid choice" << endl;
//     }

// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int binary, decimal = 0, temp, base = 1, rem;

//     cout << "Enter the binary number: ";
//     cin >> binary;

//     for (temp = binary; temp > 0; temp = temp / 10) {
//         rem = temp % 10;
//         decimal = decimal * rem  base;
//         base = base * 2;
//     }

//     cout << "The Binary Value  = " << binary <<endl;
//     cout << "The Decimal Value = " << decimal <<endl;

//     return 0;
// }
// #include<iostream>
// using namespace std;
// class animal{
//     public:

// };
// class loin :public animal{
//     public:

//     void makesound() {
//         cout << "Roar" << endl;
//     }};

//     class elephant:public animal{
//         public:

//         void makesound() {
//             cout << "trumpet"<< endl;
//         }
//     };

// int main(){
//     int n;
//     cout <<"Enter the choice " ;
//     cin >>n;
//     // int choice;

//     if(n == 1){
//         loin Loin;
//         Loin.makesound();
//     }
//     else if(n==2){
//         elephant Elephant;
//         Elephant.makesound();
//     }
//     else{
//         cout <<"invalid choice" << endl;
//     }

// }

// #include<iostream>
// using namespace std;
// class demo{
//     int a;
//     public:
//     void getdata(){
//         cout << "Enter the number" <<endl;
//         cin >>a;
//     }
//     void putdata(){
//         cout << "Value is " << a<<endl;
//     }

//     demo operator + (demo bb){
//         demo cc;
//         cc.a = a + bb.a;
//         return cc;
//     }
// };
// int main(){
//     demo aa,bb,cc;
//     aa.getdata();
//     bb.getdata();
//     cc = aa+bb;

//     aa.putdata();
//     bb.putdata();
//     cout << endl;
//     cc.putdata();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class demo{
//     int a;
//     public:
//     void getdata(){
//         cout << "Enter the number " << endl;
//         cin >>a;
//     }
//     void putdata(){
//         cout << "value is "<< a<<endl;
//     }
//     demo operator++(){
//         // demo x;
//         a = a+1;
//     }
// };

// int main(){
//     demo aa;
//     aa.getdata();
//     cout << "Orignal value" <<endl;
//     aa.putdata();
//     ++aa;
//     cout << "value after is ";
//     aa.putdata();
//     return 0;

// }

// #include<iostream>
// using namespace std;
// class demo{
//     int a;
//     public:
//     void getdata(){
//         cout << "Enter the number" <<endl;
//         cin >>a;
//     }
//     void putdata(){
//         cout << "Value is " << a <<endl;
//     }
//     void operator = (demo bb){
//         a = bb.a;

//     }
// };
// int main(){
//     demo aa,bb;
//     bb.getdata();
//     aa =bb;
//     aa.putdata();
//     bb.putdata();
//     return 0;

// }

// #include<iostream>
// using namespace std;
// class demo{
//     int a;
//     public:
//     void getdata(){
//         cout <<"Enter the value "<< endl;
//         cin >>a;
//     }
//     void putdata(){
//         cout <<"Value is "<< a <<endl;
//     }
//     demo operator +(demo bb){
//         demo cc;
//         cc.a = a + bb.a;
//     }

// };

// int main(){
//     demo aa,bb,cc;
//     aa.getdata();
//     bb.getdata();
//     cc = aa + bb;
//     aa.putdata();
//     bb.putdata();
//     cc.putdata();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class demo{
//     int a;
//     public:
//     void getdata(){
//         cout <<"Enter the value "<< endl;
//         cin >>a;
//     }
//     void putdata(){
//         cout <<"Value is "<< a <<endl;
//     }
//     demo operator -(demo bb){
//         demo cc;
//         cc.a = a - bb.a;
//     }

// };

// int main(){
//     demo aa,bb,cc;
//     aa.getdata();
//     bb.getdata();
//     cc = aa - bb;
//     aa.putdata();
//     bb.putdata();
//     cc.putdata();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main()
// {
//     int n;
//     cout << "Enter ypur number ";
//     cin >> n;
//     // int result = fact(n);
//     cout << fact(n) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// long long  int factorail( int n){

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