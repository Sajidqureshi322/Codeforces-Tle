#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int numZ = 0;
        int numO = 0;
        for(int i = 0; i < s.length(); i++){
           if(s[i]=='0') numZ++;
           else numO++;
        }

        if(min(numZ,numO)&1) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
 return 0;
}