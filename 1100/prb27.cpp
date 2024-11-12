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
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        set<int> st;
        for(int i = 0;i < n;i++){
            cin >> arr[i];
            st.insert(arr[i]);
        }

        bool is_possible = false;
        for(int i = 0;i < n;i++){
            if(st.find(k+arr[i]) != st.end()){
                is_possible = true;
                break;
            }
        }

        cout << ((is_possible)?"YES":"NO") << endl;
    }
    return 0;
}