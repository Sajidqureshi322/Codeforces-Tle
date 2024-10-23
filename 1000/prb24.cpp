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
        set<int> st;
        for(int i = 0;i < n;i++){
            int val;
            cin >> val;
            st.insert(val);
        }

        if(st.size()!=n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 return 0;
}