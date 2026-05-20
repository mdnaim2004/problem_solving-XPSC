#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 0;
        bool hard = false;

        for(char c : s){
            if(c!='a' && c!='e'&&c!='i'&&c!='o'&&c!='u'){
                cnt++;
                if(cnt >=4){
                    hard = true;
                    break;
                }
            }
            else
                cnt = 0;
            
        }
        if(hard) cout << "YES" <<"\n";
        else cout << "NO" << "\n";
    }
    return 0;
}