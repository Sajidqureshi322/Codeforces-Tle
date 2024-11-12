#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        vector<long long> arr(n),x(q);
        for(int i =0;i <n;i++)
            cin >> arr[i];

        for(int i =0;i < q; i++)
            cin >> x[i];
        

        set<int> st;
        for(int i = 0;i < q;i++){
            if(st.find(x[i])!=st.end()) continue;;
            st.insert(x[i]);
            long long powerOfTwo = 1ll << x[i];
            long long halfPowerTwo = 1ll << (x[i]-1);
            for(int j =0;j < n;j++){
                //int this case it is impossible to have aj divisible by 2^xi
                if(arr[j]&1 || arr[j] < x[i]) continue;
                
                if(arr[j]%powerOfTwo == 0){
                    arr[j] += halfPowerTwo;
                }
            }
        }
        for(int i = 0;i < n;i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
 return 0;
}