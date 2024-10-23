#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(begin(arr), end(arr));
    int s = 0, e = n - 1, wins = 0;
    while (s <= e)
    {
        int largest = arr[e];
        e--;
        int sum = largest;
        while (s <= e && sum <= d)
        {
            sum += largest;
            s++;
        }
        if(sum > d) wins++;
    }
    cout << wins << endl;
    return 0;
}