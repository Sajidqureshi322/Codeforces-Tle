#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(int n,int &k,int &x,vector<int> &nums){
    if( n < 0) return false;
    if(n == 0) return true;

    for(int i = k; i >=1; i--){
        if(i != x){
            nums.push_back(i);
            bool ans = solve(n-i,k,x,nums);
            if(ans) return ans;
            nums.pop_back();
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;
        vector<int> nums;
        if(solve(n,k,x,nums)){
            cout << "YES" << endl;
            cout << nums.size() << endl;
            for(auto i: nums) cout << i << " ";
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 return 0;
}