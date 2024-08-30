#include <iostream>
#include<vector>
using namespace std;

void solve(vector<int> nums , vector<vector<int> >& ans, int index){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j=index; j<nums.size();j++){
        swap(nums[index] ,nums[j]);
        solve(nums, ans, index+1);

        // backtrack
        swap(nums[index] ,nums[j]);
    }
}

vector<vector<int> > permute(vector<int> &nums){
    vector<vector<int> > ans;

    int index = 0;

    solve(nums,ans,index);
    return ans;
}
int main()
{
    int n;
    cout << "enter your size ";
    cin >> n;
    
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout << endl;
    vector<vector<int> > list = permute(nums);
    for(const vector<int> &per :list){
        for(int num : per){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}