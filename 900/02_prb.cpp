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

        int freq[26] = {0};
        for(int i = 0; i < n; i++){
            freq[s[i]-'a']++;
        }
        int singleFreq = 0;
        int maxi = INT_MIN;
        for(int i = 0; i< 26; i++){
            if(freq[i]&1){
                maxi = max(maxi,freq[i]);
                singleFreq++;
            }
        }
        if(k+1 >= singleFreq){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl; 
        
    }
 return 0;
}