#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> xors(3e5+10);
    xors[0] = 0;
    for(int i = 1;i < xors.size(); i++){
        xors[i] = xors[i-1] ^ i;
    }
    int t;
    cin >> t;
    while(t--){
        int a,b; // a-> MEX , B-> xor of the array
        cin >> a >> b;

        int x = xors[a-1]; // 0,1,2......a-2,a-1

        if(x == b){ //the array xor is itself equal to the b
            cout << a << endl; 
        }
        else{
             if((x^b) != a){
                cout << a + 1<< endl; // add x^b
             }
             else{
                cout << a + 2 << endl; // add 1^1^x^b
             }
        }

    }
 return 0;
}