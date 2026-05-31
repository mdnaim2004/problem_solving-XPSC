#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>m;

    while(n--){
        string s;
        cin >> s;

        if(m[s] == 0){
            cout<<"OK"<<"\n";
            m[s] = 1;
        }
        else{
            cout << s << m[s]<<"\n";
            m[s]++;
        }
    }
    return 0;
}