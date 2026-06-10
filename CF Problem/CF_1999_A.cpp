#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int res = n/10;
        int rem = n%10;

        cout << (res + rem) << "\n";
    }
    return 0;
}