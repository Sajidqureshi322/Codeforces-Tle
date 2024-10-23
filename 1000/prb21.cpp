#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length(),m = b.length();
        int ans = n+m;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        for(int i =0;i < n; i++){
            for(int j = 1; j <=n-i; j++){   
                string str = a.substr(i,j);     
                if(b.find(str) != string::npos){
                    int ops = n - j + m - j;
                    ans = min(ops,ans);
                }
            }
        }
        cout << ans << endl;

    }
    return 0;
}