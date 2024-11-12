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
    int n,t;
    cin >> n >> t; 

    string s;
    cin >> s;

    while(t--){
        for(int i = 0;i < n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}