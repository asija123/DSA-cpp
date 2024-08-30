// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void sayhello(){
//         cout<< "i am lakshay asija"<<endl;
//     }

//     int sayhello(string name ,int n){
//         cout << "i am lakshay" << endl;
//         return 1;
//     }
//     void sayhello(string name){
//         cout << "hello" << endl;
//     }
// };
// int main(){
//     A obj;
//     obj.sayhello();

// }

// operator overloading
#include<iostream>
using namespace std;
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        // cout << "output " <<value2-value1<<endl;
        cout << "hello babbar" <<endl;
    }
    void operator() (){
        cout<<"main bracket hu" << this->a<<endl;
    }
};
class animal {
    public:
    void speak(){
        cout << "speaking" <<endl;
    }
};
class dog :public animal{
    public:
    void speak(){
        cout <<"barking" <<endl;
    }
};

int main(){
    // B obj1,obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;  
    // obj1();
    dog obj;
    obj.speak();

}