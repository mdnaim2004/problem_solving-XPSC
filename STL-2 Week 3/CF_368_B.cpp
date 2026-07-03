#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    set<int> s;

    for (int i = n - 1; i >= 0; i--) {
        s.insert(arr[i]);
        arr[i] = s.size();
        cout << arr[i] << " ";
    }

    // while (m--) {
    //     int p;
    //     cin >> p;
    //     cout << arr[p - 1] << '\n';
    // }
}
// int main(){
//     int n = 99999;
//     set<int>s;
//     s.insert(n);
//     cout << s.size() <<"\n";
// }