/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: S
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
*/


##include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int start = min(X, Y) + 1;
        int end = max(X, Y) - 1;

        int sum = 0;

        for (int i = start; i <= end; i++) {
            if (i % 2 != 0) {   // odd number
                sum += i;
            }
        }

        cout << sum;
        if (T > 0) cout << "\n";
    }

    return 0;
}
