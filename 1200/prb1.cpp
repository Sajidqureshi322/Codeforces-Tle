#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T> &arr)
{
    for (const auto &i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // Your logic here
        int n;
        cin >> n;
        vector<pair<long long,int>>a(n), b(n), c(n);
        for (int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        for (int i = 0; i < n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }
        for (int i = 0; i < n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(rbegin(a), rend(a));
        sort(rbegin(b), rend(b));
        sort(rbegin(c), rend(c));
        long long ans = INT_MIN;
        for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second){
                        ans = max(ans,a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
       
    }
    return 0;
}