// // use of stl function 
// // array

// #include<iostream>
// #include<array>
// using namespace std;

// int main(){
     
//      int basic[3] = {1,2,3};

//      array<int ,4> a = {1,2,3,4};

//      int size = a.size();

//      for(int i=0; i<size; i++){
//         cout << a[i] <<endl;
//      }
//      cout << "element at index 2 is "<< a.at(2)<<endl;

//     // it will return 0 and 1 
//     cout <<"empty or not " << a.empty() << endl;  

//     cout << "first element " << a.front() << endl;

//     cout << "last element " << a.back()<< endl;
// }

// vector ==> it is a dynamic array . it store in continous mannar

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int>v;
//     cout << "capacity" << v.capacity() << endl;

//     vector<int> a(5,1);
//     cout << "after pop " << endl;
//     for(int i:a){
//         cout << i << " ";
//     }cout << endl;

//     vector<int>last(a);

//     cout << "last " << endl;
//     for(int i:last){
//         cout << i << " ";
//     }cout << endl;


//     v.push_back(1);
//     cout << "capacity" << v.capacity() << endl;

//     v.push_back(2);
//     cout << "capacity" << v.capacity() << endl;

//     v.push_back(3);
//     cout << "capacity" << v.capacity() << endl;
//     cout << "size"<< v.size()<< endl;

//     cout << "Element at index 2 " << v.at(2) <<endl;

//     cout << "front" << v.front() <<endl;
//     cout << "back " << v.back() << endl;


//     cout << "before pop"<<endl;
//     for(int i:v){
//         cout << i << " ";
//     }
//     cout<< endl;
    
//     v.pop_back();

//     cout << "after pop " << endl;
//     for(int i:v){
//         cout << i << " ";
//     }cout << endl;



//     cout << "before clear size" << v.size() << endl;
//     v.clear();
//     cout << "after clear" <<v.size()<< endl;
     
// }


// deque
// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){

//     deque<int> d;

    // d.push_back(1);
    // d.push_front(2);

    // for(int i:d){
    //     cout <<i << " ";
    // }
    // d.pop_front();
    // cout << endl;
    // for(int i:d){
    //     cout << i<<" ";
    // }
    // cout << "element at index " << d.at(1)<<endl;

    // cout << "front" << d.front() << endl;
    // cout << "back" << d.back() << endl;

    // cout << "empty or not" << d.empty() << endl;

    // cout << "before erase" << d.size()<<endl;
    // d.erase(d.begin() , d.begin()+1);
    // cout << "after erase"<<d.size()<<endl;  
    // for(int i:d){
    //     cout << i << endl;
    // }

// }


// list

// stack 
// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){

//     stack<string>s;

//     s.push("love");
//     s.push("babbar");
//     s.push("kumar");

//     cout << "Top element " <<s.top() << endl;

//     s.pop();
//     cout << "Top element " <<s.top() << endl;

//     cout << "size of stack " << s.size()<<endl;

//     cout << "empty or not " << s.empty() << endl;
// }

// queue

// #include<iostream> 
// #include<queue>
// using namespace std;

// int main(){
//     queue<string>q;

//     q.push("love");
//     q.push("babbar");
//     q.push("kumar");

//     cout << "size before pop " << q.size() << endl;

//     cout << "first element " << q.front() <<endl;

//     q.pop();
//     cout << "first element" << q.front() <<endl;

//         cout << "size before pop" << q.size() << endl;

// }


// priority queue

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
//     // max heap
//     priority_queue<int > maxi;

//     // min -heap
//     priority_queue<int , vector<int> ,greater<int>mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout << "size " << maxi.size()<<endl;
//     int n = maxi.size();
//     for(int i=0; i<n; i++){
//         cout << maxi.top()<<" ";
//         maxi.pop();
//     }cout << endl;

//     mini.push(1);
//     mini.push(2);
//     mini.push(0);
//     mini.push(5);
//     mini.push(4);

//      cout << "size " << mini.size()<<endl;
//     int m = mini.size();
//     for(int i=0; i<m; i++){
//         cout << mini.top()<<" ";
//         mini.pop();
//     }cout << endl;
// }

// map
// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<int,string>m;

//     m[1]= "babbar";
//     m[2] = "love";
//     m[13]= "kumar";
//     for(auto i:m){
//         cout <<i.first << endl; 
//     }
//     m.insert({5,"bheem"});
//     cout << "before erase " <<endl;

//     for(auto i:m){
//         cout <<i.first << " " << i.second <<endl;
//     }cout << endl;

//     auto it = m.find(5);

//     for(auto i= it ; i!=m.end();i++){
//         cout << (*i).first<<endl;
//     }
// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "findind 6 =" << binary_search(v.begin(), v.end() ,6) << endl;

    cout << "lower bound " << lower_bound(v.begin() , v.end() ,6)-v.begin() << endl;
    cout << "upperupper_bound " <<upper_bound(v.begin() , v.end() ,6)-v.begin() << endl;


    int a= 3;
    int b =8;

    cout <<"max " << max(a,b) <<endl;
    cout << "min " << min(a,b)<<endl;

    swap(a,b);
    cout << "a is " << a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string " << abcd << endl;

    rotate(v.begin(), v.begin()+1,v.end());
    cout << "after rotate " <<endl;
    for(int i:v) {
        cout << i<< " ";
    }

}

