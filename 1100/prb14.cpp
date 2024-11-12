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
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i = 0;i <n ;i++)
            cin >> a[i];
        for(int i = 0;i <n ;i++)
            cin >> b[i];
        
        int s = 0,e = n-1;
        while(a[s] == b[s])
            s++;
        while(a[e] == b[e])
            e--;

        while(s > 0 && b[s] >= b[s-1])
            s--;
        
        while(e+1 < n && b[e] <= b[e+1])
            e++;
        
        cout << s+1 << " " << e+1 << endl;
    }
    return 0;
}