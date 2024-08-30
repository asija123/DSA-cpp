#include <iostream>
#include<stack>
using namespace std;

class Stack{
    int top1;
    int top2;
    int size;
    int *arr;

    Stack(int s){
        this -> size = s;
        this -> top1 = -1;
        this -> top2 = s;
        arr = new int[s];
    }

void push1(int num){
    if(top2 - top1 >1){
        top1++;
        arr[top1] = num;
    }
    else{
        cout << "stack is full" << endl;
    }
}

void push2(int num){
    if(top2 - top1 > 1){
        top2--;
        arr[top2] = num;
    }
    else{
        cout << "stack is full" << endl;
    }
}

int pop1(int num){
    if(top1 >= 0){
        int ans = arr[top1];
        top1--;
        return ans;
    }
    else{
        cout << "stack underflow" << endl;
    }
}
int pop2(int num){
    if(top2 >= 0){
        int ans = arr[top2];
        top2--;
        return ans;
    }
    else{
        cout << "stack underflow";
    }
}

// int peek(){
//     if(top1 )

// }



};

int main()
{
    Stack st(10);

    push1(1);
    cout << st.push1(5) << endl;
    
    return 0;
}