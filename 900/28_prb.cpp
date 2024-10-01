#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        long long maxi = 0;
        long long mini = 0;
        for(int i = 0;i < n;i++){
            cin >> arr[i];
            maxi += ceil((double)arr[i]/x);
            mini += arr[i];  
        }
        mini = ceil((double)mini/x);
        cout << mini <<" " << maxi << endl;
    }
 return 0;
}