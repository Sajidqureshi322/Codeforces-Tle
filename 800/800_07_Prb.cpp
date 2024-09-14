#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        // int numOp = 0;
        bool flag = false;
        for(int i=0; i < 6 ;i++){
            if(x.find(s) != string::npos){
                cout << i << endl;
                flag = true;
            }
            if(flag){
                break;
            }
            x+=x;
        }
        if(flag == false)
            cout << -1 << endl;

    }
 return 0;
}