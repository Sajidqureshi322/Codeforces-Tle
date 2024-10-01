#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //odd Queries TLE 900  Q-10
        int n, q;
        cin >> n >> q;
        vector<long long> arr(n+1,0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i-1] + arr[i];
        }

        while (q--)
        {
            int l,r,k;
            cin >> l >> r >> k;
            long long totalSum = arr[l-1] + (arr[n] - arr[r]);
            int len = r - l + 1;
            if((totalSum + (k*len))&1){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}