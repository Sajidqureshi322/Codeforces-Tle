#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        // B. Luntik and Subsequences TLE-900
        int n;
        cin >> n;
        vector<int> arr(n);
        int countOnes = 0;
        int countZeros = 0;
        for(int i = 0; i < n;i++) {
            cin >> arr[i];
            if(arr[i] == 1) countOnes++;
            if(arr[i] == 0) countZeros++;
        }
        cout << countOnes * (1ll<<countZeros)<< endl;  
    }
 return 0;
} 