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
        vector<int> v(n);
        for(int i = 0;i <n;i++)
            cin >> v[i];

        int parity = (v[0]%2 == 0)?0:1;// 1->odd parity , 0 even parity
        int sum = v[0];
        int ans = sum;
        for(int i = 1;i < n;i++){
            if(abs(v[i])%2 == 0 && parity == 0 || abs(v[i])%2 == 1 && parity == 1){
                ans = max(ans,sum);
                sum = v[i];
            }
            else{
                sum += v[i];
                parity = (parity == 1)?0:1;
                sum = max(sum,v[i]);
            }
            
            ans = max(ans,sum);
            // cout << ans << " " << sum << endl;
        }
        cout << ans << endl;
    }
 return 0;
}