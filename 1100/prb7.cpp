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
        long long n, x;
        cin >> n >> x; // x is the weight of water which can be used
        vector<long long> arr(n);
        
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long s = 0,e = 1e10;
        while(s <e-1){
            long long mid = s + (e-s)/2;
            long long total_water = 0;
            for(int i = 0;i < n;i++){
                if(arr[i] < mid)
                    total_water += mid - arr[i];
            }
            if(total_water > x)
                e = mid;
            else   
                s = mid;
        }
        cout << s << endl;

    }
    return 0;
}