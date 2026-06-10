#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;

    while(t--){
        int n;cin >>n;
        string s; cin >> s;

        int cnta = 0;
        int cntb = 0;

        for(char c : s){
            if(c == 'a'){
                cnta++;
            }else if(c == 'b'){
                cntb++;
            }
        }
        cout << cnta << " " << cntb <<"\n";
    }
    
    return 0;
}