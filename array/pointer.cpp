// #include<iostream>
// using namespace std;

// void update( int **p2){

//     // p2 = p2 + 1;
// // change hoga = no;

//     // *p2 = *p2 + 1;s
//     // change hoga = yes;

//     **p2 = **p2 + 1;
//     // change hoga = yes;


// }

// int main(){

//     int i =5;
//     int* p = &i;
//     int** p2 = &p;

//     // cout<< "sab sai h" << endl;

//     // cout<< "printing p " << p << endl;
//     // cout<< "address of p " << &p << endl;

//     // cout  << *p2 << endl;

//     // cout << i << endl;
//     // cout << *p << endl;
//     // cout << **p2 << endl;

//     cout  << endl << endl;
//     cout << "before " << i << endl;
//     cout << "before "  << p << endl;
//     cout << "before"  << p2 << endl;
//     update(p2);

//     cout << "after " << i << endl;
//     cout << "after "  << p << endl;
//     cout << "after"  << p2 << endl;

//     }

// #include<iostream>
// using namespace std;

// void update(int n){
//     n++;
// }

// int main(){

//     int n = 5;

//     cout << " before " << n << endl;
//     update(n);

//     cout << "after " << n << endl;
// }


// dynamic array alllocaton 

// when the i and j is same
// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     // creation done
//     int** arr = new int *[n];
//     for(int i=0; i<n; i++){
//         arr[i] = new int[n];
//     }

//     // taking input
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin >> arr[i][j];
//         }
//     }

//     // printing 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout <<  arr[i][j] << " ";

//         }
//         cout << endl;
//     }

// }

// when they are different 
// #include<iostream>
// using namespace std;

// int main(){

//     int row;
//     cin >> row;

//     int col;
//     cin >> col;

//     // creation done
//     int** arr = new int *[row];
//     for(int i=0; i<row; i++){
//         arr[i] = new int[col];
//     }

//     // taking input
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin >> arr[i][j];
//         }
//     }

//     // printing 
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout <<  arr[i][j] << " ";

//         }
//         cout << endl;
//     }

//     // releasing memory
//     for(int i=0; i<row; i++){
//         delete [] arr[i];
//     }

//     delete []arr;
    

// }


// defining macros

#include<iostream>
using namespace std;

// macros
#define PI  3.14

int main(){

    int r =5;

    double area = PI* r * r;

    cout << area;
}