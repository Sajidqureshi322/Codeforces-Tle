#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i =0;i < n; i++){
            cin >> arr[i];
        }
        long long ans = arr[i];
        for(auto i=1; i< n; i++){
            ans &= arr[i];
        }
        cout << ans << endl;

    }
 return 0;
}