#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin >> t;
    // while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = false;
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 0){
                flag = true;
            }
        }
        if(flag){
            cout << 0 << endl;
            return 0;
        }
        for(int i  = 0;i < n; i++){

            mini = min(mini,abs(arr[i]));
        }
        cout << mini << endl;
    // }
 return 0;
}