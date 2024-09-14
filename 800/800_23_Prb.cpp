#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x,y,dx,dy;
        cin >> x >> y >> dx >> dy;

        if(y > dy){
            cout << -1 << endl;
            continue;
        }
        int diffY = dy - y;
        int newX = x + diffY;
        if(newX < dx) {
            cout << -1 << endl;
            continue;
        }
        int diffX = diffY+x - dx;
        cout << diffX + diffY  << endl;

    }
 return 0;
}