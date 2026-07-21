#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        
        long long answer = LLONG_MAX;

        for (int k = 0; k < m; k++) {
            long long sum = 0;

            for (int i = 0; i < n; i++) {
                sum += (v[i] + k) % m;
            }

            answer = min(answer, sum);
        }
        cout << answer <<"\n";
    }
    return 0;
}