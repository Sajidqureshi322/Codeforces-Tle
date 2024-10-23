#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;

        string s;
        cin >> s;
        bool is_present = false;
        int l,r;
        for(int i = n-1; i >= 1;i--){
            if(s[i] < s[i-1]){
                is_present = true;
                cout <<"YES" << endl;
                cout << i << " " << i+1 << endl;
                break;
            }
        }
        if(!is_present)
            cout << "NO" << endl;
 return 0;
}