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
        long long n,x;
        cin>> n >> x;
        vector<vector<long long>>st(3,vector<long long>(n));
        for(int i = 0;i < 3;i++){
            for(int j = 0;j < n;j++){
                cin>> st[i][j];
            }
        }

  
        int ans = 0;
        for(int i = 0; i< 3; i++){
            int temp = 0;
            for(int j = 0;j < n;j++){
                temp = temp|st[i][j];
                if((temp|x)!= x) 
                    break;
                
                // cout << i << " : " << j << " : " << ans << " : " << temp << endl;
                ans = ans|st[i][j];
            }
        }   
        if(ans == x)
            cout<< "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}