#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T>& arr) {
    for(const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,k,a,b;
        cin >> n >> k >> a >> b;

        vector<pair<long long,long long>> cities(n+1); 
        for(int i = 1; i<=n;i++){
            cin >> cities[i].first >> cities[i].second;
        }

        long long ans = abs(cities[b].first-cities[a].first) + abs(cities[b].second-cities[a].second);
        // cout << ans << endl;
        long long source_cost = LLONG_MAX/2,des_cost=LLONG_MAX/2;
        for(int major = 1; major <= k; major++){
            long long x = cities[major].first;
            long long y = cities[major].second;
            source_cost = min(source_cost,abs(x-cities[a].first)+abs(y-cities[a].second));
            des_cost = min(des_cost,abs(x-cities[b].first) + abs(y-cities[b].second));
        }
        cout << min(ans,source_cost+des_cost) << endl;

    
    }
    return 0;
}