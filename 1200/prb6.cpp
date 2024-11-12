#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T>& arr) {
    for(const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        // Your logic here
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++)
            cin >> arr[i];
        
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        int ans = 0,state = 0;
        for(int i = 1;i  < n;i++){
            if(arr[i-1] > arr[i] && state != 1){
                ans++;
                state = 1;
            }
            else if(arr[i] > arr[i-1] && state != -1){
                ans++;
                state = -1;
            }
        }
        cout << ans+1 << endl;
    }
    return 0;
}