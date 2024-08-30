#include <iostream>
#include<vector>
using namespace std;

void solve()

int main()
{
    int n;
    cout << "Enter your n ";
    cin >> n;

    int m;
    cout < "Enter your m ";
    cin >> m;

    vector<int> arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin >> arr[i][j];
        }
    }

    
    return 0;
}