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
        for(int i = 0; i< n; i++){
            cin >> arr[i];
        }
        bool isEqual = true;
        for(int i = 0; i< n-1; i++){
            if(arr[i] != arr[i+1]){
                isEqual = false;
            }
        }
        if(isEqual){
            cout << -1 << endl;
            continue;
        }
        sort(arr.begin(),arr.end());
        int i = 0;
        while(arr[0] == arr[i]){
            i++;
        }

        cout << i <<" " << n - i << endl;
        for(int j =0; j < i; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
        for(int j = i; j < n; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }
 return 0;
}