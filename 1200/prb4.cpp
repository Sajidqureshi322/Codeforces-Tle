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
        int new_size = n*(n-1)/2;
        vector<int> arr(new_size);
        for(int i = 0;i < new_size; i++)
            cin >> arr[i];
        

        sort(begin(arr),end(arr));
        int last = 0;
        for(int i = 1; i < n; i++){
            cout << arr[last] << " ";
            last+= n-i;
        }
        int maxi = 1e9;
        cout << maxi << endl;
    }
    return 0;
}