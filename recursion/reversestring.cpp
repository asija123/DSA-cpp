#include <iostream>
using namespace std;
// this is two pointer approach
void reverse(string& name , int i , int j){

    if(i>j){
        return;
    }

    swap(name[i] , name[j]);
    i++;
    j--;

    reverse(name , i,j);
}
// we can do with one variable also
void reverse(string& name , int i){

    if(i>0){
        return;
    }

    swap(name[i] , name[name.length()-i-1]);
    i++;

    reverse(name , i);
}

// i have done palidrone and string question in this only

int main()
{
    // string name  = "Lakshay";
    string name;
    cout << "Enter your string ";
    getline(cin , name);
    string str = name;

    reverse(name, 0 ,name.length()-1);
    // cout << name;
    if(str == name){
        cout << "yes";
    }
    else{
        cout << "No";
    }
    return 0;
}