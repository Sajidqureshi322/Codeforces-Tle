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
        long long n,c;
        cin >> n >> c;
        vector<long long> sides(n);
        for(int i= 0;i < n;i++){
            cin >> sides[i];    
        }

        long long s = 1,e = 1e9;
        while(s <=e){
            long long mid = (s + (e-s)/2);
            long long area = 0;
            for(int i = 0;i < n;i++){
                area += (sides[i]+(mid*2)) * (sides[i]+(mid*2));
                if(area > c) break;
            }
            if(area == c){
                cout << mid << endl;
                break;
            }

            if(area > c)
                e = mid -1;
            else 
                s = mid + 1;
        }
    }
    return 0;
}