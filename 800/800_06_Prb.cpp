#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i = 0;i < n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        if(mp.size() > 2){
            cout << "NO" << endl;
            continue;
        }
        if(abs(mp.begin()->second - mp.rbegin()->second) <= 1){
            cout << "YES" << endl;
        }
        else    
            cout << "NO" << endl;


    }
 return 0;
}