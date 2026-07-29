#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int month = 0;
    while(t--){
        int x,y,z; cin >> x >> y >> z;

        int d = (z-y);

        if(z <= y) cout <<-1 <<"\n";
        else cout << (x+d-1)/d <<"\n";

    }
    return 0;
}