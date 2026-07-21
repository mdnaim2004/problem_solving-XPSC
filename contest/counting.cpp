#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    cout <<"The array is : ";
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
        cnt++;
    }
    cout <<"\nThe total number of : " << cnt <<"\n";

    return 0;
}