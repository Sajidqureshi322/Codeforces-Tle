#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ops(string digit,string s){
    int x = digit[0] ; // -> 0,2,5,7
    int y = digit[1] ; // -> 0,5,0,5

    int steps = 0;
    int j = s.length() - 1;
    while(j >0 && s[j]!=y){
        j--;
        steps++;
    }
    int i = j -1;
    while(i > 0 && s[i] != x){
        i--;
        steps++;
    }
    return steps;
}

int main()
{
    int t;
    cin >> t;
    while(t--){ 

        // B. Make it Divisible by 25  TLE-900
        long long n;
        cin >> n;
        long long count = 0;
        
        string s = to_string(n);
        vector<string> digits = {"00","25","50","75"};
        int ans = INT_MAX;
        for(auto digit:digits){
            int mini = ops(digit,s);
            ans = min(mini,ans);
        }
        cout << ans << endl;


    }
 return 0;
}