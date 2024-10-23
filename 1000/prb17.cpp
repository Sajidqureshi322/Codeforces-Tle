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

        int k = 0;
        while((1<<(k+1)) < n) k++;//checking for the msb set bit

        for(int i =(1<<k)-1; i>=0; i--){
            cout << i << " ";
        }
        for(int i = (1<<k); i < n;i++){
            cout << i << " ";
        }
        cout << endl;
   }
 return 0;
}