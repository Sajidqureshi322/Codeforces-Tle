#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // MAKE IT INCREASING TLE 900  Q-15

        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int op = 0;
        bool not_possible = false;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i + 1] == 0)
            {
                cout << -1 << endl;
                not_possible = true;
                break;
            }
            while (arr[i] >= arr[i + 1])
            {
                arr[i] /= 2;
                op++;
            }
        }
        if(!not_possible) cout << op << endl;
    }
    return 0;
}