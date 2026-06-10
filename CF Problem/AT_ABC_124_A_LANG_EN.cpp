#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>> a >>b;
    int sum = 0;
    
    if(a > b)
        sum = a+ (a-1);
    else if(b > a)
        sum = b + (b-1);
    else
        sum = a + b;
    
    cout << sum << endl;
    return 0;
}