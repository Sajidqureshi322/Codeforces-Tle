#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // NOT DIVIDING TLE 900  Q-11
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(arr[0] == 1) arr[0] = 2;
        cout << arr[0] << " ";
        for (int i = 1; i < n; i++)
        {   
            if(arr[i] == 1){
                if(arr[i-1] == 2){
                    arr[i] = 3;
                }
                else{
                    arr[i] = 2;
                }
            }
            else if(arr[i]%arr[i-1] == 0){
                arr[i]++;
            }

            cout << arr[i] << " ";
        }

        cout << endl;
    }
    return 0;
}