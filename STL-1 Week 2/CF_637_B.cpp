#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    set<string>st;

    for(int i = n - 1; i >= 0; i--) {
        if(st.count(v[i]) == 0) {
            cout << v[i] << "\n";
            st.insert(v[i]);
        }
    }
    return 0;
}