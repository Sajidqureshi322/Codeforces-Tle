#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >>  n >> x;
        vector<int> arr(n);
        for(int i  =0;i < n;i++){
            cin >> arr[i];
        }                               
        vector<long long> prev = {arr[0]-x,x+arr[0]}; //0->left 1->right range l-----r
        int changes = 0;
        for(int i = 1; i < n;i++){
            vector<long long> curr = {arr[i] - x,arr[i]+x};
            vector<long long> overlap = {max(prev[0],curr[0]),min(prev[1],curr[1])};
            //if there is no overlap
            if(overlap[0] > overlap[1]){
                changes++;
                prev = curr;
            }
            else{
                prev = overlap;
            }
        }
        cout << changes << endl;
    }
 return 0;
}