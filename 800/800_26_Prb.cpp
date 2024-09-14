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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool isGcd = false;
        for(int i = 0;i < n; i++){
            for(int j = i;j < n;j++){
                if(__gcd(arr[i],arr[j]) <= 2 ){
                    cout << "Yes" << endl;
                    isGcd = true;
                    break;
                }
            }
            if(isGcd) break;
        }
        if(isGcd == false) cout << "No" << endl;
    }
 return 0;
}