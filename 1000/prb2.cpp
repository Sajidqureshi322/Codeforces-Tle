#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int d = k-1; // ex k = 5 then d = 4
        int e_count = 0;

        for(int i = 0;i < n; i++){
            if(arr[i]%2 == 0) e_count++;

            if(arr[i]%k == 0) d = 0;// that is product is divisble by k and we don't need any operations
            else d = min(d,k - arr[i]%k);   
        }

        if(k!=4){
            cout << d << endl;
        }
        else{
            if(e_count >= 2){
                cout << 0 << endl;
            }
            else if(e_count == 1){
                cout << min(d,1) << endl; // if d == 0 the only even number which is divisible by 4 else we need to convert one more number to even such that product becomes divisible by k
            }
            else{
                cout << min(d,2) << endl; // similar to above 
            }
        }
    }
    return 0;
}