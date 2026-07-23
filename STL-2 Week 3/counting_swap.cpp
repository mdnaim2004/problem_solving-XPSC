#include<bits/stdc++.h>
using namespace std;

int main(){
int t; cin >> t;
while(t--){
    int n; cin >> n;
    vector<int>v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    for(int i=0; i<n; i++){
        int j = i+1;

        if(v[i] + v[j] <= 2){
            swap(v[i], v[j]);
        }
    }
    for(int i=0; i<n; i++){
        cout << v[i] <<" ";
    }
    cout <<"\n";
    
}

    return 0;
}