#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // ODD GRASSHOPER TLE 900  Q-19
        long long x, n;
        cin >> x >> n;

        long long d;
            if(n%4 == 0) d = 0;
            if(n%4 == 1) d = -n;
            if(n%4 == 2) d = 1;
            if(n%4 == 3) d = n+1;

        if(abs(x)&1)
        cout << x - d << endl;
        else cout << x  + d << endl;
    }
    return 0;
}