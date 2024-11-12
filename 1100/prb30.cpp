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
bool isPalindrome(vector<int> &arr,int s,int e,int &n,int x = -1){
    while(s <= e){
        if(arr[s] == x){
            s++;
            continue;
        }
        if(arr[e] == x){
            e--;
            continue;
        }
        if(arr[s] != arr[e]) 
            return false;
        s++;
        e--;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        // Your logic here
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }

        if(isPalindrome(arr,0,n-1,n)){
            cout << "YES" << endl;
            continue;
        }
        int i = 0,j = n-1;
        while(i < j && arr[i] == arr[j]){
            i++;
            j--;
        }
        if(i>=j){
            cout << "YES" << endl;
            continue;
        }
        bool is_pal = isPalindrome(arr,i+1,j,n,arr[i]) || isPalindrome(arr,i,j-1,n,arr[j]);
        
        cout << ((is_pal)?"YES":"NO") << endl;

    }
    return 0;
}