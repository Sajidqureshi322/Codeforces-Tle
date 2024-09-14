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
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        bool found = false;
        for (int k = 1; k <= n; k++)
        {
            int left_count = 0, right_count = 0;
            for (int i = 1; i <= k; i++)
            {
                if (arr[i] == 2)
                    left_count++;
            }
            for (int i = k + 1; i <= n; i++)
            {
                if (arr[i] == 2)
                    right_count++;
            }
            if (left_count == right_count)
            {
                cout << k << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
    }
    return 0;
}