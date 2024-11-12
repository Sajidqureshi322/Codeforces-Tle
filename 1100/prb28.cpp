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
        for(int i =0;i < n; i++){
            cin >> arr[i];
        }

        int cnt = 0,ans = 0,x = arr[n-1],i = n-1;
        while(i >= 0){

            while(i >= 0 && arr[i] == x){
                cnt++;
                i--;
            }
            if(i<0) break;
            ans++;
            i -= cnt;
            cnt *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}