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
        int negs = 0;
        long long sum = 0;
        int mini = INT_MAX;
        for(auto &i:arr){
            cin >> i;
            if(i <= 0){
                negs++;
            }
            
            mini = min(mini,abs(i));
            sum += abs(i);
        }
        if(negs%2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * mini<< endl;
    }
    return 0;
}