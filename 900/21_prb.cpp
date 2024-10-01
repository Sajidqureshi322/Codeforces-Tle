#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        // A. AB Balance TLE 900 
        string s;
        cin >> s;
        if(s[0] == s[s.length()-1]){ cout << s << endl;}
        else{    
            s[s.size()-1] = s[0];
            cout << s << endl;}
    }
 return 0;
}