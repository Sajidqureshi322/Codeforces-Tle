#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        if(c == 'g'){
            cout << 0 << endl;
            continue;
        }
        s += s;
        int minTime =0;
        int lastGIdx = -1;
        for(int i= 2*n-1; i>= 0; i--){
            if(s[i] == c){
                minTime = max(minTime,lastGIdx-i);
            }
            if(s[i] == 'g') lastGIdx = i;
        }
        cout << minTime << endl;
       
       
    }
 return 0;
}