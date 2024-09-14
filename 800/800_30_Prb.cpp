#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int i){
    int count = 0;
    while(i!=0){
        int digit = i%10;
        if(digit != 0) count++;

        i /=10;
    }
    return count==1;
}
int main()
{
    set<int> st;
    for(int i = 0;i <1e7; i++){
        if(check(i)){
            st.insert(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans=0;
        for(auto it:st){
            if(it<= n){
                ans++;
            }
        }
        cout << ans << endl;
 
    }
 return 0;
}