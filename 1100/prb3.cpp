
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n),arr;
        for(int i = 0;i < n;i++)
            cin >> v[i];
        arr = v;
        sort(begin(v),end(v));
        vector<long long> pre(n);
        pre[0] = v[0];
        for(int i = 1;i < n;i++)
            pre[i] = pre[i-1] + v[i];
        
        map<int,int>mp;
        vector<int> dp(n);
        dp[n-1]=n-1;
        mp[v[n-1]] = n-1;
        for(int i = n-2; i>=0; i--){
            dp[i] = (v[i+1] > pre[i])?i:dp[i+1];
            mp[v[i]] = dp[i];
        }
        for(int i = 0;i < n;i++){
            cout << mp[arr[i]] << " ";
        }
        cout << endl;
    }

 return 0;
}