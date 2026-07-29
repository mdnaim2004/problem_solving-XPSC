#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
   
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];

        int odd = 0;
        int even = 0;
        for(int i=0; i<n; i++){
            if(i % 2 == 0){
                if(v[i] % 2 == 0)
                    odd++;
                if(v[i] % 2 != 0)
                    even++;
            }
            else{
                if(v[i] % 2 != 0)
                    odd++;
                if(v[i] % 2 == 0)
                    even++;
            }
        }
        cout << min(odd, even) << "\n";

    }
    
    
    return 0;
}