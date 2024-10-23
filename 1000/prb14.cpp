#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // checking if there are different elements in the array
    // if yes then it's not possible to swap the shoes
    // as the array is sorted we can directly check

    vector<int> shuffling(n);
    for (int i = 0; i < n; i++)
        shuffling[i] = i + 1;

    // left rotate the same groups by 1
    int i = 0;
    while (i < n)
    {
        int curr_sz = arr[i]; // shoe size for the current group

        // need first and last occurence of the curr_sz
        int start = i;
        int end = i;
        while (end < n && arr[start] == arr[end])
            end++;

        // if there is unique shoe size: 6 7 7
        if (start == end - 1)
        {
            // we have a unique shoe size
            cout << -1 << endl;
            return;
        }
        // left rotate this group by 1
        rotate(begin(shuffling)+start,begin(shuffling)+start+1,begin(shuffling)+end);
        i = end;  
    }
    for(auto shoe:shuffling){
        cout << shoe <<" ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}