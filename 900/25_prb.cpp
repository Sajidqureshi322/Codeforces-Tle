#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long a , b;
        cin >> a >> b;

        if(a == b){
            cout << 0  << " " << 0 <<  endl;
        }
        else{
            if(a < b) swap(a,b);

            long long gcd = a-b;

            cout << gcd << " " << min(b%gcd,gcd-b%gcd) << endl;
        }
    }
 return 0;
}