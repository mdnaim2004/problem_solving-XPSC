#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        for(int i=0; i<n; i++){
            if(s[i] == 'z'){
                while(i <n && s[i] == 'z'){
                    s[i] = 'a';
                    i++;
                }
                break;
            }
        }
        cout << s << "\n";

    }
    return 0;
}