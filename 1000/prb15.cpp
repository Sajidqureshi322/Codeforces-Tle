#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        int blackSegment = 0;
        int ans = INT_MAX;
        int count = 0;
        int i =0,j = 0;
        while(j < n){
            if(s[j] != 'B') count++;

            if(j-i+1 < k){
                j++;
                continue;
            }
            ans = min(ans,count);     

            if(s[i] != 'B') count--;
            i++;
        }
        cout << ans << endl;
    }
 return 0;
}