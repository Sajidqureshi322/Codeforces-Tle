#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n ;
        vector<int> arr(n-1);
        for(int i = 0; i < n-1; i++){
            cin >> arr[i];
        }
        int posSum = 0;
        int negSum = 0;
        for(int i = 0; i< n-1; i++){
             if(arr[i] > 0){
                posSum += arr[i];
            }
            else{
                negSum += arr[i];
            }
        }
        cout << -(posSum+negSum) << endl;

    }
 return 0;
}