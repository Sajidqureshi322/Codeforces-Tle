#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int,int>> visits(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> visits[i].first;
            visits[i].second = i;
        }
        long long tt = 0;
        sort(visits.rbegin()+1,visits.rend()+1);

    }
    return 0;
}