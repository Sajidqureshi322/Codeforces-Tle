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
        vector<int> arr(n+1);
        map<int,int> mp;
        for(int i = 1; i<=n; i++){
            cin >> arr[i];
            mp[arr[i]] = i;
        }
        int mini = INT_MAX;
        for(auto i:mp){
            if(abs(i.first - i.second)>0){
                mini = min(mini,abs(i.first-i.second));
            }
        }
        cout << mini << endl;

    }
 return 0;
}