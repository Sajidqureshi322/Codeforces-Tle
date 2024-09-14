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
            if(arr[i] == -1) countNeg++;
            else countPos++;
        }
        int operation = 0;
        if(countNeg&1){
            countNeg--;
            countPos++;
            operation++;
        }
        while(countNeg > 0 && countNeg > countPos){
            operation++;
            countNeg--;
            countPos++;
        }
        if(countNeg&1){
            cout << operation+ 1<< endl;
        }
        else{
            cout << operation << endl;
        }

   }
 return 0;
}