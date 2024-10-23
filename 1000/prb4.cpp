#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &arr){
    for(auto i:arr) cout << i << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mini = INT_MAX;
        vector<int> min_2;
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;
            vector<int> arr(m);
            for(int j = 0;j < m; j++) cin >> arr[j];

            int min_ele = *min_element(begin(arr),end(arr));

            mini = min(mini,min_ele);
            arr.erase(find(arr.begin(),arr.end(),min_ele));

            min_2.push_back(*min_element(begin(arr),end(arr))); 
        }   

        long long tsum = (long long)mini + accumulate(begin(min_2),end(min_2),0ll) - *min_element(begin(min_2),end(min_2)); 
        cout << tsum <<endl;
    }
 return 0;
}