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

        int count1 = 0;
        int count0 = 0;
        for(auto i:s){
            if(i == '0') count0++;
            else count1++;
        }

        if(count0 == count1){
            cout << 0 << endl;
            continue;
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '0'){
                if(count1 > 0) count1--;
                else{
                    cout << s.length() - i << endl;
                    break;
                }
            }
            else{
                if(count0 > 0 ) count0--;
                else{
                    cout << s.length() - i << endl;
                    break;
                }
            }
        }
    }
 return 0;
}