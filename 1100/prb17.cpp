#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T>& arr) {
    for(const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        // Your logic here
        int n,k;
        cin >> n >> k;
        vector<vector<int>> arr(n,vector<int>(n));
        for(int i = 0;i < n ;i++){
            for(int j = 0;j < n;j++)
                cin >> arr[i][j];
        }
        int diff =0;
        for(int i = 0;i <n; i++){
            for(int j = 0;j < n; j++){
                if(arr[i][j] != arr[n-i-1][n-j-1])
                    diff++;
            }
        }
        diff = diff/2;

        if(k < diff)
            cout << "NO" << endl;
        else{
            if(k == diff)
                cout << "YES" << endl;
            else{
                k -= diff;
                if(n&1)
                    cout << "YES" << endl;
                else if(k&1)
                    cout << "NO" << endl;
                else    
                    cout << "YES" << endl;
            }
        }

            
        
    }
    return 0;
}