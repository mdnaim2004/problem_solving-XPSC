#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int x, y,p; cin >> x >> y >> p;
        int ans = 10000;

        for(int i=0; i<100; i++){
            for(int j=0; j<100; j++){
                if((x+i)*(y+j) >= p)
                    ans = min(ans,(i+j));
            }
        }
        cout << ans <<"\n";
    }               
    return 0;
}