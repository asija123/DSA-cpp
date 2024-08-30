// #include<iostream>
// using namespace std;

// int gcd(int a,int b){
//     if(a==0)
//     return b ;

//     if(b==0)
//     return a;

//     while(a!=b){
//         if(a>b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return a;
// }

// int main(){

//     int a,b;
//     cout << "Enter the value of a and b" <<endl;

//     cin >> a >> b;
//     int ans = gcd(a,b);

//     cout <<"the gcd of " <<a << " & " <<b << " is: "<< ans << endl;
// }

// opps concept in cpp

#include<iostream>
using namespace std;

class hero{

    private:
    int health;

    public:
    char level;

    hero(){
        cout << "constructor called" << endl;

    }


    void print(){

        cout << level << endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
    
};

int main(){

    // object created statically

    cout << "hii" << endl;
    hero ramesh;
    cout << "hello" << endl;







    // // static allocation 
    // hero a;
    // a.sethealth(80);
    // a.setlevel('b');
    // cout << "level is " << a.level << endl;
    // cout << "health is " << a.gethealth() << endl;


    // // dynamic allocation
    // hero *b = new hero;
    // b->setlevel('A');
    // b->sethealth(70);
    // cout << "level is " << (*b).level << endl;
    // cout << "health is " << (*b).gethealth() << endl;

    // cout << "level is " << b->level << endl;
    // cout << "health is " << b->gethealth() << endl;



//     hero ramesh;

//     cout << "ramesh health is " << ramesh.gethealth()<< endl;
// // use setter
//     ramesh.sethealth(70);
//     ramesh.level = 'A';

//     cout << "health is : " << ramesh.gethealth() << endl;
//     cout << "level is : " << ramesh.level << endl;



     
}
//  padding 
// greedy aliment   