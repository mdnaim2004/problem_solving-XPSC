#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r; cin >> l >> r;
    int sum = (l+r)/2;
    if(sum%2 == 0) cout <<"YES"<<"\n";
    else cout << "NO" <<"\n";
    return 0;
}