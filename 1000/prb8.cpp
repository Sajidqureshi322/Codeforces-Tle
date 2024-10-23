#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int>mp1,mp2;
        for(auto i:s) mp1[i]++;

        int maxi = 0;
        for(int i = 0; i<n; i++){
            mp2[s[i]]++;
            mp1[s[i]]--;
            if(mp1[s[i]] == 0){
                mp1.erase(s[i]);
            }
            maxi = max(maxi,(int)mp2.size() + (int)mp1.size());
        }
        cout << maxi << endl;
    }
    return 0;
}