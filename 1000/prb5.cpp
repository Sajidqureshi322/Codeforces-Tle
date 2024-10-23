#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Comparator for priority_queue: sort by second element in ascending order
static bool cmp(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second; // max-heap based on the second element
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i =0;i < n; i++){
            cin >> arr[i];
        }
        vector<pair<int,int>> v;
        for(int i = 0;i < n;i++){
            if(arr[i]%k == 0){
                v.push_back({k,-i});// -i so that the smallest index can be sorted and came first if two elements are equal
            }
            else{
                v.push_back({arr[i]%k,-i});
            }
        }
        sort(begin(v),end(v));

        for(int i = v.size()-1; i>= 0;i--){
            cout << abs(v[i].second)+1 << " ";
        }
        cout << endl;


        
        
    }

    return 0;
}


     
