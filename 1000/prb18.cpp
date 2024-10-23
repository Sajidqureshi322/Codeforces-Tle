#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long w,h;
        cin >> w >> h;

        long long ans = 0;
        for(int i = 0; i < 4; i++){
            int k;
            cin >> k;

            vector<long long> points(k);
            for(int j = 0;j < k; j++)
                cin >> points[j];
            
            // i = 0,1 horizontal points
            // i = 2,3 vertical points
            ans = max(ans,(points[k-1]-points[0])*(i < 2?h:w));
        }
        cout << ans << endl;
    }
 return 0;
}