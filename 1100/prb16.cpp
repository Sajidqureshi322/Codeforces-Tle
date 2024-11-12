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
        

        sort(begin(arr),end(arr));

        bool possible = true;
        if(arr[0] != 1)
            possible = false;
        else{
            long long sum = 1;
            for(int i = 1; i< n;i++){
                if(arr[i] > sum){
                    possible = false;
                    break;
                }
                sum += arr[i];
            }
        }
        cout << ((possible)?"YES":"NO")<< endl;
    }
    return 0;
}