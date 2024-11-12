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
        int n,k;
        cin >> n >> k;
        vector<long long> arr(n),pre(n+1,0);
        for(int i =0;i < n;i++){
            cin >> arr[i];  
        }
        sort(begin(arr),end(arr));

        for(int i = 0;i < n;i++)
            pre[i+1] = pre[i] + arr[i];

        long long ans = 0;

        for(int i = 0;i<=k;i++){
            ans = max(ans,pre[n-i] - pre[2*(k-i)]);
        }
        cout << ans << endl;

    }
    return 0;
}