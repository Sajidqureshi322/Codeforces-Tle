#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b; // r->red team , b-> blue team
        cin >> n >> r >> b;

        int nreds = r/(b+1);
        int rem = r%(b+1);
        string ans="";
        for(int i = 0;i < b;i++){
            for(int j = 0;j < nreds;j++){
                ans+= 'R';
            }
            if(rem > 0){
                ans+='R';
                rem--;
            }
            ans += 'B';
        }
        for(int i = 0;i < nreds; i++){
            ans += 'R';
        }
        cout << ans << endl;
    }
    return 0;
}