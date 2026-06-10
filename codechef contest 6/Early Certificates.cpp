#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;

    while(t--){
        int n, m; cin >> n>>m;

        string a, b; cin >> a >> b;

        int i = 0;
        while(i < a.size() && i <b.size() && a[i] == b[i]){
            cout <<a[i];
            i++;
        }
        cout <<"\n";
    }
    return 0;
}