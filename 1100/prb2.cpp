#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>> k;

        vector<int> arr(n),brr(n);
        for(int i = 0; i< n;i++)
            cin >> arr[i];
        for(int i = 0; i< n;i++)
            cin >> brr[i];

        int ans = 0;
        priority_queue<int> pq;
        int experience = 0;
        for(int i = 0;i < n;i++){
            if(k <= 0) break;
            experience += arr[i];
            pq.push(brr[i]);
            k--;

            ans = max(ans,experience+(pq.top() * k));
        }
        cout << ans << endl;

    }
 return 0;
}