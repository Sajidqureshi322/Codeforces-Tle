#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int cnt = 0;
        if(b == 1){
            b++;
            cnt++;
        }
        while(a > 0){
            if(a%2 == 0 && b%2 == 0){
                b++;
                cnt++;
                a /= b;
                cnt++;
            }
            else{
                a /=b;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
 return 0;
}