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
        vector<int> arr(n);
        int countPos = 0;
        int countNeg = 0;
        for(int i = 0; i<  n; i++){
            cin >> arr[i];
            if(arr[i] > 0) countPos++;
            else countNeg++;
        }

        if(countNeg > countPos && countNeg % 2 != 0){
            cout << (countNeg - countPos)/2 <<endl;
            continue;
        }
        if(countPos >= countNeg && countNeg %2 == 0){
            cout << 0 << endl;
        } 
        else if(countPos >= countNeg && countNeg % 2 != 0){
            cout << 1 << endl;
        }
        else{
            cout << countNeg - countPos<< endl;
        }
   }
 return 0;
}