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
        sort(visits.rbegin()+1,visits.rend());

        long long tt = 0;
        long long curr_coord = 1;
        vector<pair<long long,long long>> config(n+1);

        for(int i =1; i <=n;i++){
            tt += 2 * curr_coord * visits[i].first;

            
        }


    }
    return 0;
}