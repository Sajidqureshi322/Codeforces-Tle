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
        cin>>n;
        vector<int> a(n),b(n);
        map<int,int> mp1,mp2;
        for(int i = 0;i < n; i++){
            cin >> a[i];
        }
        for(int i = 0;i < n;i++){
            cin >> b[i];
        }
        for(int i = 0;i < n; i++){
            int len = 1;
            while(i+1 < n && a[i] == a[i+1]){
                len++;
                i++;
            }
            if( len > mp1[a[i]]) mp1[a[i]] = len;
        }
        for(int i = 0;i < n; i++){
            int len = 1;
            while(i+1 < n && b[i] == b[i+1]){
                len++;
                i++;
            }
            if(len > mp2[b[i]]) mp2[b[i]] = len;
        }
        int maxi = 0;
        for(auto i:mp1){
            if(mp2[i.first] + i.second > maxi) {
                maxi = max(maxi,mp2[i.first] + i.second);
            }
        }
        for(auto i:mp2){
            if(mp1[i.first] + i.second > maxi) {
                maxi = max(maxi,mp1[i.first] + i.second);
            }
        }
        cout << maxi << endl;

    }
 return 0;
}