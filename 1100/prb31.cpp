#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T>& arr) {
    for(const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    map<int,int>mp;
    for(int i = 0;i < n;i++){
        cin>> arr[i];
        if(!mp[arr[i]])
            mp[arr[i]] = i+1;
    }

    for(int i = 0 ;i < q;i++){
        int a;
        cin >> a;
        int ans = mp[a];
        cout << ans << " ";
        for(auto &m:mp){
            if(m.second < ans)
                m.second+=1;
        }
        mp[a] = 1;
    }
    cout << endl;
    
    return 0;
}