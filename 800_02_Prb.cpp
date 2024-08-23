#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n>> x;
        vector<int> arr(n);
        for(int i  =0; i  < n;i++){
            cin >> arr[i];
        }
        int maxi = INT_MIN;
        for(int i = 0; i< n-1; i++){
            maxi = max(arr[i+1]-arr[i],maxi);
        }
        if(n == 1){
            cout << arr[0] << endl;
            continue;
        } 
        maxi = max(maxi,2*(x - arr[n-1]));
        cout << maxi << endl;

    }
 return 0;
}