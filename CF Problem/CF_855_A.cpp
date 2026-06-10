#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<string>st;
    while(n--){
        string s; cin >> s;

        if(st.count(s)) 
            cout << "YES\n";
        else 
            cout << "NO\n";

        st.insert(s);
    }
    return 0;
}