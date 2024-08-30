// #include<iostream>
// using namespace std;
// class human{
//     public:
//     int height;
//     int weight;
//     int age;

//     public:
//     int getage(){
//         return this->age;
//     }
//     void setweight(int w){
//         this->weight = w;
//     }

// };

// class male: public human{
//     public:
//     string color;

//     void sleep(){
//         cout << "male sleeping" << endl;
//     }
// };
// int main(){
//     male object1;
//     cout << object1.age<<endl;
//     cout << object1.weight<<endl;
//     cout << object1.height << endl;

//     cout << object1.color <<endl;

//     object1.setweight(54);
//     cout << object1.weight<<endl;
//     object1.sleep();

// }

// single inheritance

// #include<iostream>
// using namespace std;

// class animal{
//     public:

//     int age;
//     int weight;

//     public:
// void speak(){
//     cout <<"speaking" <<endl;
// }
// };
// class dog:public animal{

// };



// int main(){
//     dog d;
//     d.speak();
//     cout << d.age << endl;

// }


// multiple inhertance 

#include<iostream>
using namespace std;

class animal{
    public:

    int age;
    int weight;

    public:
void speak(){
    cout <<"speaking" <<endl;
}
};
class dog:public animal{

};
class germanshepered : public dog{

};



int main(){
    germanshepered g;
    g.speak();
   

}