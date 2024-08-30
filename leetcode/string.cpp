#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;

    string v = 'aeiou';

    string ans;


    for(int i=0;i<str.length();i++){
        if(str[i] == v[i]){
            str[i]++;
            ans += str[i];
        }
        else{
            str[i]--;
            ans += str[i];
        }
    }

    cout << ans << endl;
    return 0;
}