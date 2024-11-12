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
        // Your logic here
        int n,c;
        cin >> n>> c;
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i = 0;i < n;i++){
            int a;
            cin >> a;
            pq.push(a+i+1);
        }
        int ans = 0;
        while(!pq.empty() && c >=pq.top()){
            ans++;
            c  -= pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}