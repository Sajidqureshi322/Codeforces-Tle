#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,p;
        cin >> n >> p;
        vector<int> arr(n);
        vector<int> cost(n);
        for(int i =0;i < n;i++){
            cin >> arr[i];
        }
        for(int i =0; i < n; i++){
            cin >> cost[i];
        }      

        vector<pair<long long,long long>> cost_cap;
        cost_cap.push_back({p,n+1});
        for(int i=0; i < n; i++){
            cost_cap.push_back({cost[i],arr[i]});
        }
        sort(cost_cap.begin(),cost_cap.end());

        int total = 1;
        long long tcost = p;
        int ind = 0;
        while(total <  n){
            int left = n - total;

            if(cost_cap[ind].second <= left){
                total += cost_cap[ind].second;
                tcost += (cost_cap[ind].first * cost_cap[ind].second);
            }
            else{
                total = n;
                tcost += left * cost_cap[ind].first;
            }
            ind++;
        }
        cout << tcost << endl;
   }
 return 0;
}