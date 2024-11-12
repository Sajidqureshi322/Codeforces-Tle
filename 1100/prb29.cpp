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
        vector<long long> arr(n);
        long long d1 =0,d2 = 0;
        for(int i= 0;i < n;i++){
            cin >> arr[i];
            if(i&1)
                d1 = __gcd(d1,arr[i]); 
            else
                d2 = __gcd(d2,arr[i]);
        }
        bool is_pos = true;
        for(int i = 0; i< n;i+=2){
            if(arr[i]%d1 == 0){
                is_pos = false;
                break;
            }
        }
        if(is_pos){
            cout << d1 << endl;
            continue;
        }

        is_pos = true;
        for(int i = 1;i < n;i+=2){
            if(arr[i]%d2 == 0){
                is_pos = false;
                break;
            }
        }
        cout << ((is_pos)?d2:0 )<< endl;
    }
    return 0;
}