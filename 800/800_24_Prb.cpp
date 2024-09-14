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
        int a;
        int x = 0;//xor
        for(int i = 0; i < n; i++){
            cin >> a;
            x = x^a;
        }
        if(n&1){
            cout << x << endl;
        }
        else{
            if(x == 0){
                cout << 1 << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
 return 0;
}