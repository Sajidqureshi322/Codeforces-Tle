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
        string s;
        cin >> s;
        int n = s.length();
        int maxLen = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                int len = 0;
                while (i < n && s[i] == '1')
                {
                    len++;
                    i++;
                }
                maxLen = max(maxLen, len);
            }
            else
            {
                i++;
            }
        }
        int cnt = 0;
        i = 0;
        while (i < n && s[i] == '1')
        {
            cnt++;
            i++;
        }
        i = n - 1;
        while (i > 0 && s[i] == '1')
        {
            cnt++;
            i--;
        }
        // cout << maxLen << " " << cnt << endl;
        cnt = min(cnt,n);
        maxLen = max(maxLen, cnt);
        if (maxLen == n)
        {
            cout << 1ll * n * n << endl;
        }   
        else    
        {
            int x = (maxLen-1)/2;
            cout << 1ll * (maxLen-x) * (x+1) << endl;
        }
    }
    return 0;
}