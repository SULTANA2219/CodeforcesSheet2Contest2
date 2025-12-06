/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: R
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int N, M;
        cin >> N >> M;

        if (N <= 0 || M <= 0) {
            break;   // stop the program immediately
        }

        int start = min(N, M);
        int end   = max(N, M);

        int sum = 0;

        for (int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << "\n";
    }

    return 0;
}
