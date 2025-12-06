/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: Y
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            cout << a;
        } else if (i == 2) {
            cout << " " << b;
        } else {
            long long c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }

    cout << "\n";
    return 0;
}
