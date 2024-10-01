#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool solve()
{
    //DELETIVE EDITING TLE 900  Q-16
    string s, t;
    cin >> s >> t;
    int fs[26] = {0}, ft[26] = {0};
    for (auto i : s)
        fs[i - 'A']++;
    for (auto i : t)
        ft[i - 'A']++;
    int i = 0;
    int j = 0;
    int n = s.length(), m = t.length();
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {   
            if(fs[s[i]-'A'] < ft[t[j]-'A']) return false;
            if(fs[s[i]-'A'] == ft[t[j]-'A']){
                ft[t[j]-'A']--;
                j++;
            }
        }
        fs[s[i]-'A']--;
        i++;
    }
    // cout << j << endl;
    return j==m;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // DELETIVE EDITING TLE 900  Q-16

        cout << (solve()?"YES":"NO") << endl;
    }
    return 0;
}