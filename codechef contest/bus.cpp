#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,x; cin >>n >> m >> x;
        int r = (x+m-1)/m;
        cout <<min(r,n-r+1)<<"\n";
    }
    return 0;
}