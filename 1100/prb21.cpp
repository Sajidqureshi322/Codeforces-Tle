#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T> &arr)
{
    for (const auto &i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
  
    int t;
    cin >> t;
    while (t--)
    {
        // Your logic here
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int,int> mp;// storing element with it's index
        for(int i = 0;i < n;i++){
            cin >> arr[i];
            mp[arr[i]] = i+1;
        }
        int ans = -1;
        for(int i = 1;i <= 1000;i++){
            for(int j = 1;j <= 1000; j++){
                if(mp[i] && mp[j] && __gcd(i,j) == 1){
                    ans = max(ans,mp[i]+mp[j]);
                }
            }
        }
        cout << ans << endl;

        
    }
    return 0;
}