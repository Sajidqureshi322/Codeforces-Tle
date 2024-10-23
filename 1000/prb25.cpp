#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x,y,k;
        cin >> x >> y >> k;

        long long factor = x-1;

        // have k coals
        long long needs = y*k - 1;     
        long long stick_trades = needs/factor + (needs%factor != 0);
        long long coal_trades = k;

        long long sticks = 1 +  stick_trades * factor - y * k;
    
        // have k sticks
        if(sticks >= k){
            cout << (stick_trades + coal_trades) << endl;
        }
        else{
            needs = k - sticks;
            stick_trades += needs/factor+(needs%factor != 0);
            cout << stick_trades + coal_trades << endl;
        }

        
    }
 return 0;
}