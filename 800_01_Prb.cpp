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
        vector<int> v(n);
        for(int i = 0;i < n; i++){
            cin >> v[i];
        }
        bool isSorted = true;
        for(int i = 0; i< n-1; i++){
            if(v[i] > v[i+1])
                isSorted = false;
        }
        if(isSorted){
            cout << "YES" << endl;
            continue;;
        }
        if(k == 1){
            cout << "No" << endl;
            // continue;
        }
        else{
            cout <<"YES" << endl;
        }
    }
 return 0;
}