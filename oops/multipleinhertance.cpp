// #include <iostream>
// using namespace std;
// class animal
// {
// public:
//     int age;
//     int weight;

// public:
//     void bark()
//     {
//         cout << "barking" << endl;
//     }
// };
// class human
// {
// public:
//     string color;

// public:
//     void speak()
//     {
//         cout << "speaking" << endl;
//     }
// };
// class hybrid : public animal, public human
// {
// };
// int main()
// {
//     hybrid obj1;
//     obj1.bark();
//     obj1.speak();
// }


// heriarchial function

// #include<iostream>
// using namespace std;
// class A {
//     public:
//     void funct1() {
//         cout << "function 1" << endl;
//     }
// };
// class B :public  A{
//     public:
//     void funct2() {
//         cout << "function 2" << endl;
//     }
// };
// class C : public  A{
//     public:
//     void funct3() {
//         cout <<"inside function 3" << endl;
//     }
// };

// int main(){
//     A obj1;
//     obj1.funct1();

//     B objt2;
//     objt2.funct2();
//     objt2.funct1();

//     C objt3 ;
//     objt3.funct1();
//     objt3.funct3();

// }


// inhertance ambiguity
#include<iostream>
using namespace std;
class A {
    public:
    void funct() {
        cout << "function 1" << endl;
    }
};
class B {
    public:
    void funct() {
        cout << "function 2" << endl;
    }
};
class C : public  A ,public B{
   
};
int main(){
    C obj;
    obj.A::funct();
    obj.B::funct();
}
