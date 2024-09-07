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
        bool isSorted = true;
        for(int i = 1; i < n; i++){
            if(arr[i-1] > arr[i]){
                isSorted = false;
                break;
            }
        }
        if(isSorted == false){
            cout << 0 << endl;
            continue;
        }


        int mini = INT_MAX;
        for(int i = 1; i < n; i++){
            mini = min(mini,arr[i] - arr[i-1]);
        }

        cout << mini/2 + 1 << endl;

    }
 return 0;
}