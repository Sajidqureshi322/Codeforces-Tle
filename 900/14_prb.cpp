#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        //NIT DESTROYS THE UNIVERSE TLE 900  Q-13

        int n;
        cin >> n;
        vector<int> arr(n+1);
        bool first_non_zero_occ = false;
        int first_occ = -1;
        int last_occ = -1;
        for(int i =1; i <=n; i++){
            cin >> arr[i];
            if(first_non_zero_occ == false  && arr[i] != 0){
                first_occ = i;
                first_non_zero_occ = true;
            }
            if(arr[i] != 0){
                last_occ = i;
            }
        }
        //mean there is no non zero element present in the array
        if(first_occ == -1 && last_occ == -1){
            cout << 0 << endl;
            continue;
        }

        // finding is there a contiguous sequence of non zero elements or not
        bool is_zero_present = false;
        for(int i = first_occ; i <= last_occ; i++){
            if(arr[i] == 0){
                is_zero_present = true;
                break;
            }
        }
        // there is zero present in the subsegment 
        if(is_zero_present){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }


    }
 return 0;
}