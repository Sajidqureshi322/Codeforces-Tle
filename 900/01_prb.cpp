#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        vector<pair<int, int>> dirs = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
        set<pair<int, int>> v1, v2;
        int count = 0;
        for (auto d : dirs)
        {
            int x1 = xk + d.first;
            int y1 = yk + d.second;
            v1.insert({x1, y1});

            int x2 = xq + d.first;
            int y2 = yq + d.second;
            v2.insert({x2, y2});
        }
        int ans = 0;
        for(auto pos:v1){
            if(find(v2.begin(),v2.end(),pos) != v2.end()){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}