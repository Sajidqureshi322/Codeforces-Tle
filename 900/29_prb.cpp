#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n*k);
        for(int i = 0; i< n*k; i++){
            cin >> arr[i];
        }
        long long ans = 0;
        int i = n * k;
        while(k--){
            i = i - (n/2 + 1);// 1 based indexing
            ans += arr[i];
        }   
        cout << ans << endl;
    }
 return 0;
}