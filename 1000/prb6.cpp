#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k,q;//n->no. of vaction days , k -> no. of skiing days , q-> threshold degree above which he can't go to vaction
        cin >> n>> k >> q;
        vector<int> arr(n);

        for(int i =0; i < n;i++){
            cin >> arr[i];
        }
        long long ans = 0;
        long long count = 0;
        for(int i =0;i <n;i++){
            if(arr[i] <= q) count++;
            else{
                if(count >= k){
                    ans += (count*1ll*(count+1))/2 -((k-1)*count - ((k-2)*(k-1))/2);
                }
                count = 0;
            }
        }
        if(count >= k){
            ans += (count*(count+1))/2 -((k-1)*count - ((k-2)*(k-1))/2);
        }
        cout << ans << endl;
    }
 return 0;
}