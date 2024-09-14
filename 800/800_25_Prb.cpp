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
        int i = 0,j = n-1;
        int count = 0;
        while(s[i] != s[j] && i < j){
            count+=2;
            i++;
            j--;
        }
        cout << n - count << endl;
    }
 return 0;
}