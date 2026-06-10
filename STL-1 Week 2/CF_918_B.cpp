#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string name[1005], ip[1005];

    for (int i = 0; i < n; i++) {
        cin >> name[i] >> ip[i];
    }

    for (int i = 0; i < m; i++) {
        string cmd, cur_ip;
        cin >> cmd >> cur_ip;

        string clen_ip = cur_ip;
        clen_ip.pop_back();

        string s_name;

        for (int j = 0; j < n; j++) {
            if (ip[j] == clen_ip) {
                s_name = name[j];
                break;
            }
        }

        cout << cmd << " " << cur_ip << " #" << s_name << endl;
    }
    return 0;
}

