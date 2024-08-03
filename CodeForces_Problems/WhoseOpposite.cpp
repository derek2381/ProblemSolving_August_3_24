// problem link
// https://codeforces.com/problemset/problem/1560/B

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int diff, val;
        diff = abs(a-b);
        val = diff*2;
        
        if(a > val || b > val || c > val){
            cout << -1 << endl;
        }else{
            if(c > diff){
                cout << c-diff << endl;
            }else{
                cout << c + diff << endl;
            }
        }
    }
}