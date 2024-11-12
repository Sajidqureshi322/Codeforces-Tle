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
        vector<long long> arr(n);
        for(int i = 0;i < n;i++)
            cin >> arr[i];
        
        long long res = 2;
        while(1){
            set<long long> st;
            for(int i = 0;i < n;i++){
                st.insert(arr[i]%res);
            }
            if(st.size() == 2){
                break;
            }
            res *= 2;
        }
        cout << res << endl;
    }
    return 0;
}