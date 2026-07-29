#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin >> x;
    int res = x/10;
    int rem = x % 10;

    if(res == rem) cout <<"No" <<"\n";
    else cout << "Yes" <<"\n";
    return 0;
}