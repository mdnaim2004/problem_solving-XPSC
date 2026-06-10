#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    if(x > a){
        cout<< "Alice" <<"\n";
    }
    else if(x < a){
        cout << "Bob" <<"\n";
    }
    else{
        if(y >= b){
            cout <<"Alice" <<"\n";
        }else{
            cout << "Bob" <<"\n";
        }
    }

    return 0;
}