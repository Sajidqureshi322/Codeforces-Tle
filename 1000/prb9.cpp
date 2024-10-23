#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b){
    if(a%b == 0) return a;

    return a * b;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a1,b1;
        long long mini =  INT_MAX;
        for(int i = n/4;i<=n/2; i++){
                long long a = i;
                long long b = n-a;
                long long lc = lcm(a,b);
                if(mini > lc){
                    a1 = a;
                    b1 = b;
                    mini = lc;
                }
        }
        cout << a1 << " " << b1 << endl;

    }
 return 0;
}