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
        for(int i =0; i< n;i++){
            cin >> arr[i];
        }
        int cnt = 0;
        for(int i  =0; i < n-1; i++){
            if((arr[i]&1 && arr[i+1]&1) ||(arr[i]%2 == 0 && arr[i+1]%2 == 0) ){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
 return 0;
}