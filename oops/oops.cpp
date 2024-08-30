#include<iostream>
#include<cstring>
using namespace std;

class hero{

    private:
    int health ;

    public:
    char *name;
    char level;
    static int timetocomplete;
    // constructor created
    hero(){
        cout << "constructor called" << endl;
        name = new char[100];
    }
    // paramertersed constructor
    hero(int health){
        cout << "this -> " << this <<endl; 
        this->health = health;
    }
    hero(int health ,char level){
        this->level = level;
        this->health = health;
    }
    // copy constructor
    hero(hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level; 
    }

    void print(){
        cout <<endl;
        cout << "name: " <<this->name<< " ,";
        cout << "health "<< this->health<<" ,";
        cout <<"level " << this-> level<< endl;
        cout << endl;


    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health  = h;
    }
     void setlevel(char ch){
            level = ch;
        }
    void setname(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timetocomplete;
    }
    // destructor 
    ~hero(){
        cout << "Destructor called" << endl;
    }
};

int hero :: timetocomplete = 5;

int main(){ 
cout << hero :: random() << endl;







    // cout << hero :: timetocomplete <<endl;

    // hero a;
    // cout << a.timetocomplete << endl;

    // hero b;
    // b.timetocomplete = 10;
    // cout << a.timetocomplete <<endl;
    // cout << b.timetocomplete <<endl;

    














    // // static
    // hero a;

    // // dynamic 
    // hero *b = new hero();
    // // manually destructor call
    // delete b;













    // hero hero1;
    // hero1.sethealth(12);
    // hero1.setlevel('D');
    // char name[7] = "babbar";
    // hero1.setname(name);

    // hero1.print();
    // hero hero2(hero1);
    // hero2.print();
    // // hero hero2 = hero1;

    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();



    // object created statically
    // hero ramesh(10);
    // cout << "address of ramesh " << &ramesh << endl;
    // // dynamically 
    // hero *h  = new hero;
    // h->print(); 

    // hero temp(22,'b');
    // temp.print();

    // hero suresh(30,'c');
    // suresh.print();

    // cout <<endl;
    // // copy constructor
    // hero R(suresh);
    // R.print();




    // // static allocation
    // hero a;
    // cout << "level is : "<< a.level << endl;
    // cout << "health is : " << a.gethealth() << endl;

    // // dynamically allocation
    // hero *b = new hero;
    // cout << "level is : " << (*b).level << endl;
    // cout << "level is : " << (*b).gethealth() << endl;
    // cout << endl;

    // cout << "level is : " << b->level << endl;
    // cout << "level is : " << b->gethealth() << endl;





    // hero ramesh;
    // cout << "ramesh health is " <<ramesh.gethealth() << endl;
    // // use setter

    // ramesh.sethealth(70);
    // ramesh.level = 'a';


    // // ramesh.health = 40;
    // // ramesh.level = 'a';

    // cout << "health is : " << ramesh.gethealth() << endl;
    // cout << "level is : " << ramesh.level << endl;

}