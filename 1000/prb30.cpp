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
        for(auto &i:arr)
            cin >> i;

        sort(rbegin(arr),rend(arr));
        print(arr);
    }
    return 0;
}