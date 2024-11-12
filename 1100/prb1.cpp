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

        string s;
        cin >> s;
        
        map<char,int> mp;
        long long ans = 0;
        for(int i = 0;i < n;i++){
            if(!mp[s[i]]){
                ans += n-i;
            }
            mp[s[i]]++;
        }
        cout << ans << endl;
    }
 return 0;
}