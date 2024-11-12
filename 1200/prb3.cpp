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
long long sum(long long x){
    return 1ll*x*(x+1)/2;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        // Your logic here
        long long n,x,y;
        cin >> n >> x >> y;
        if(x == y){
            cout << 0 << endl;
            continue;
        }

        long long lcm = (x*y)/__gcd(x,y);
        long long commonInd = n/lcm;
        long long xTimes = n/x - commonInd;
        long long yTimes = n/y - commonInd;
        cout << (sum(n) - sum(n-xTimes) - sum(yTimes)) << endl;
    }
    return 0;
}