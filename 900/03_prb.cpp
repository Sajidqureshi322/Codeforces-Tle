#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;

        long long minSum = k *(k+1)/2;
        long long maxSum = n*(n+1)/2 - (n-k) * (n-k+1)/2;
        if(x < minSum || x > maxSum){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl; 
        }
    }
 return 0;
}