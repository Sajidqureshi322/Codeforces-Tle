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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            maxi = max(arr[i],maxi);
            mini = min(mini,arr[i]);
        }
        if(maxi == mini){
            cout << "No" << endl;
            continue;
        }

        cout << "Yes" << endl << maxi << " ";
        int freq = 0;// represents the frequency of maxi
        for(int i = 0; i < n -1 ;i++){
          cout << arr[i] << " ";
        }
        // cout << endl;
      
    }
 return 0;
}