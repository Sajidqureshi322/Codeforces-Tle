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

        vector<vector<int>> v(n,vector<int>(m));
        int negs = 0;
        int sum = 0;
        int mini = INT_MAX;
        for(int i =0;i < n;i++){
            for(int j =0;j < m; j++){
                cin >> v[i][j];
                if(v[i][j] < 0) negs++;
                sum += abs(v[i][j]);
                mini = min(mini,abs(v[i][j]));
            }
        }

        if(negs&1)
            sum -= 2* mini;
        
        cout << sum << endl;




    }
 return 0;
}