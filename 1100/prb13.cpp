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

        int n;
        cin >> n;
        vector<int> a(n),b(n);
        sort(begin(a),end(a));
        sort(begin(b),end(b));

        int i = 0,j = 0;
        vector<int> pos(n);
        while(j < n && i < n){
            if(a[i] > b[j]){
                pos[i] = n-i;
                j++;
            }
            else{
                i++;
            }
        }
        sort(begin(pos),end(pos));
        long long ans = 1;
        int mod = 1e9+7;
        for(int i = 0;i < pos.size(); i++){
            ans = ((ans%mod)*((pos[i]-i)%mod))%mod;
        }
        cout << ans << endl;
    }
    return 0;
}   