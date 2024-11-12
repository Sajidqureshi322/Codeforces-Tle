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
        long long t_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            t_sum += arr[i];
        }
        long long ans = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            t_sum -= arr[i];
            if (t_sum > 0)
                ans = max(ans, __gcd(sum, t_sum));
        }
        cout << ans << endl;
    }
    return 0;
}