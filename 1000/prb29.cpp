#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template <typename T>
void print(const vector<T>& arr) {
    for(const auto& i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
       // Your logic here
        long long a , b;
        cin >> a >> b;

        if(a == b)
            cout << "0" << endl;
        else{
            if(a < b)
                swap(a,b);
            
            int ans = 0;
            while( a > b){
                if(a/8 >= b && a%8 == 0)
                    a /= 8;
                else if(a/4 >= b && a%4 == 0)
                    a /= 4;
                else if(a/2 >= b && a%2 == 0)
                    a /= 2;
                else    
                    break;
                ans++;
            }
            if(a == b)
                cout << ans << endl;
            else
                cout << -1 << endl;

        }
    }
    return 0;
}