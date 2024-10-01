#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
       //AvtoBus TLE 900  Q-14

       long long n;
       cin >> n;
       if(n&1){
        cout << -1 << endl;
       }
       else{
            n = n/2;
            if(n == 1)
                cout << - 1 << endl;
            else
                cout << n/3 + (n%3 == 0? 0:1)   << " " << n/2 << endl;

       }

    }
 return 0;
}