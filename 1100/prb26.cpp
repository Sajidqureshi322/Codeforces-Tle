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
        cin>> n;
        vector<long long> arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        int i =0,j = n-1;
        int ans = 0;
        long long l_weight = arr[i],r_weight = arr[j];
        while(i < j){
            if(l_weight == r_weight){
                ans = max(ans,i + 1  + n- j);
            }
            if(l_weight < r_weight){
                i++;
                l_weight += arr[i];
            }
            else{
                j--;
                r_weight += arr[j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}