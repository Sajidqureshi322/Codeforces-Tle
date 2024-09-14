#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i = 0; i < n;i++){
            cin >> arr[i];
            sum += arr[i];
        }

        bool checkParity = false;
        for(int i = 0; i < n; i++){
            sum -= arr[i];

            if((sum % 2 == 0 && arr[i] %2 == 0) || (sum % 2 != 0 && arr[i]%2 != 0)){
                cout << "Yes" << endl;
                checkParity = true;
                break;
            }
            sum += arr[i];
        }
        if(checkParity) continue;

        cout << "No" << endl;


    }
 return 0;
}