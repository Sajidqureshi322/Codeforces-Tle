#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        //MAINAK AND ARRAY TLE 900  Q-12

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n; i++){
            cin >> arr[i];
        }

        int ans = -1e5;

        //including a1
        for(int i = 1; i < n; i++){
            ans = max(ans,arr[i]-arr[0]);
        }

        // including an
        for(int i = 0; i < n-1; i++){
            ans = max(ans,arr[n-1] - arr[i]);
        }

        //including both
        for(int i = 0;i < n; i++){
            ans = max(ans,arr[i] - arr[(i+1)%n]);
        }
        cout << ans << endl;
    }
 return 0;
}