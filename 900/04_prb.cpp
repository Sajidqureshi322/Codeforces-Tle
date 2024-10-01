#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;
        vector<long long> arr(n);
        long long ans = b;
        for(int i = 0; i< n; i++){
            long long num;
            cin >> num;
            ans += min(num,a-1);
        }
        cout << ans << endl;
    }
 return 0;
}