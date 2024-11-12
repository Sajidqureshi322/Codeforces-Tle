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
        vector<int> arr(n),v;
        int ans = (1<<30)-1;
        for(int i = 0;i < n;i++){
            cin >> arr[i];
            if(arr[i] != i){
                ans = ans & arr[i];
            }    
        }
        cout << ans << endl;
      


    }
    return 0;
}