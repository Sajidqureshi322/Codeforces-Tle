#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                count++;
            }
            else
            {
                ans = max(ans, count);
                count = 0;
            }
        }
        cout << max(ans,count) << endl;
    }
    return 0;
}