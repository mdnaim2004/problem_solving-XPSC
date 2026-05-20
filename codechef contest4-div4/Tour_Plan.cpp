#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >>z;

    if(z < 50){
        cout << x << "\n";
    }
    else if(z >= 50){
        cout << x + (y*(z-50)) << "\n";
    }

    return 0;
}