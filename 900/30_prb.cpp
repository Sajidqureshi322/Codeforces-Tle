#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i = 1;i <= n;i++){
            cin >> arr[i];
        }
        vector<int> left_min_ind(n+1);
        vector<int> right_min_ind(n+1);
        left_min_ind[1] = 1;
        right_min_ind[n] = n;
        for(int i = 2;i <=n; i++){  
            if(arr[i] < arr[left_min_ind[i-1]]){
                left_min_ind[i] = i;
            }
            else{
                left_min_ind[i] = left_min_ind[i-1];
            }
        }
        for(int i = n-1; i>= 0; i--){
            if(arr[i] < arr[right_min_ind[i+1]]){
                right_min_ind[i] = i;
            }
            else{
                right_min_ind[i] = right_min_ind[i+1];
            }
        }
        int ind1=-1,ind2=-1,ind3=-1;
        for(int i = 2; i<= n; i++){
            int num1 = arr[left_min_ind[i]];
            int num2 = arr[right_min_ind[i]];

            if(arr[i] > num1 && arr[i] > num2){
                ind1 = left_min_ind[i];
                ind2 = i;
                ind3 = right_min_ind[i];
                break;
            }
        }
        if(ind1 == -1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << ind1 << " " << ind2 << " " << ind3 << endl;
        }
    }
 return 0;
}