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
        int n,l,r;
        cin >> n >> l >> r;

        vector<int> ans;
        ans.push_back(l);

        for(int i =2;i<=n; i++){
            if(l%i == 0)
                ans.push_back(l);
            else{
                int num = l/i;
                num = (num+1) * i;
                if(num <= r)
                    ans.push_back(num);
                else
                    break;  
            }
        }
        if(ans.size() != n)
            cout << "NO" << endl;
        else{
            cout <<"YES" << endl;
            print(ans);
        }
    }

    return 0;
}