#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        //PERMUATATION SWAP TLE 900  Q-9
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i = 1; i<= n; i++){
            cin >> arr[i];
        }
        int ans= 0;
        for(int i = 1; i <=n; i++){
            ans = __gcd(abs(arr[i] - i),ans);
        }
        cout << ans << endl;
    }
 return 0;
}