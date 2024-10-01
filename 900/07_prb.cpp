#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>> n>>k;
        vector<int> arr(n);
        for(int i = 0; i <  n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans = 0;
        int count = 0;
        for(int i = 0; i< n-1; i++){
            if(arr[i+1] - arr[i] <= k){
                count++;
            }
            else{
                ans = max(ans,count+1);
                count = 0;
            }
        }
        ans = max(ans,count+1);
        cout << n - ans << endl;
    }
 return 0;
}