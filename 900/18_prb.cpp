#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        //ARRAY CLONING TECHNIQUE TLE 900  Q-17 
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int,int> mp;
        for(int i =0;i <n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int maxF = mp[arr[0]];
        for(auto m:mp) maxF = max(maxF,m.second);

        int op = 0;
        while(maxF < n){
            op++;
            op += maxF;
            maxF *= 2;
        }
        cout << op + n - maxF << endl;A
    }
 return 0;
}