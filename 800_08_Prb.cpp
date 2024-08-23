#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        bool flag = true;
        vector<int> v(n);
        for(int i = 0; i<n ;i++){
            cin >> v[i];
        }
        // bool flag = true;
        for(int i = 0; i < n; i++){
            if(v[i] == k){
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
    }
 return 0;
}