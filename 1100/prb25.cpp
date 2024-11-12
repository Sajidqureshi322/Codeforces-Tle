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
        string s;
        cin >> s;

        set<char>st;
        for(auto i:s)
            st.insert(i);
        
        if(st.size() == s.length())
            cout << "YES" << endl;
        else{
            int size = st.size();
            bool is_perfect = true;
            for(int i = 0;i < s.length()-size; i++){
                if(s[i] != s[i+size])
                    is_perfect = false;
            }
            cout << ((is_perfect)?"YES":"NO") << endl;
        }
    }
    return 0;
}