#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxi = INT_MIN;
        int i = 0;
        int start = 0;
        int count = 0;
        while(i < n){
            if(s[i] == '.'){
                start = i;
                while(i < n && s[i] == '.'){
                    count++;
                    i++;
                }
                maxi = max(maxi,i-start);
            }
            i++;
        }
        if(count == 0){
            cout << count << endl;
            continue;
        }
        if(maxi < 3){
            cout << count << endl;
        }
        else{
            cout << 2 << endl; 
        }

    }
 return 0;
}