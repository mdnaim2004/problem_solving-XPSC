#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        string unq = "";
        map<char, int> mp;
        for(int i = 0; i< n; ++i) {
            if(mp[s[i]] == 0) {
                unq.push_back(s[i]);
                mp[s[i]]++;
            }
        }

        sort(unq.begin(), unq.end());

        map<char, char> symetry;
        int l = 0, r = unq.size() - 1;
        while(l <= r) {
            symetry[unq[l]] = unq[r];
            symetry[unq[r]] = unq[l];
            l++, r--;
        }

        for(int i=0;i<n;++i) 
            s[i] = symetry[s[i]];
        
        cout << s << endl;
    }
    return 0;
}