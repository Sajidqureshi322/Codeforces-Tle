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
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0;i < n; i++){
            cin >> arr[i];
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]);
        }

        int sum = mini + maxi;
        // vector<int> ans(n);
        for(int i =0; i< n; i++){
            cout << sum - arr[i] << " ";
        }
        cout << endl;
    }
 return 0;
}