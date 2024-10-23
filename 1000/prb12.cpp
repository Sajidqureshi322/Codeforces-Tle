#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        vector<long long> arr(n, 0);
        long long left = b * k;// like if sum  is 17 and b = 3 and k = 6 in this case we can maintain the beatuy but we need more sum
        long long right = (k - 1) * n + b * k;// like if sum is 100 and b = 3 and k = 6 and n = 1 in this case sum decrease to 0
        if (left > s || right < s)
        {
            cout << -1 << endl;
            continue;
        }
        long long num = b * k; // to ensure beauty
        s -= num;

        if(s >= k){
            num += k-1; // if sum is greater that is sum is equal to (right) variable in the worst case we have to add k-1 to the bk as it won't affect the beauty
            s-= k-1;
        }
        else{
            num += s; //suppose if n = 1 k = 6 b = 2 s = 14
            s = 0;
        }
        arr[0] = num;

        for (int i = 1; i < n; i++)
        {
            if (s >= k)
            {
                arr[i] = k - 1; // k - 1 because it will affect the beauty as it will always be 0
                s -= arr[i];
            }
            else
            {
                arr[i] = s;
                s = 0;
            }
        }
        for (auto i : arr)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}