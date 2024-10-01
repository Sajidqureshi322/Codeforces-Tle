#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        //MAEK AP TLE 900  Q-18
        long long a,b,c;
        cin >> a >> b >> c;

        bool yes = false;

        // first case -> m = (2b-c)/a || am b c
        if((2*b-c)%a == 0 && (2*b-c)/a > 0){
            yes = true;
        }
        // second case -> m = (c+a)/2b || a bm c

        // no need to check greater than as it will always be greater
        if((c + a)%(2*b) == 0){
            yes = true;
        }

        // third case -> m = (2b-a)/c || a b cm

        if((2*b - a)%c == 0 && (2*b - a)/c > 0){
            yes = true;
        }

        if(a == b && b == c){
            yes = true;
        }

        if(yes) cout <<"YES" << endl;
        else cout <<"NO" << endl;
        
        
    }
 return 0;
}