/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: M
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
*/



#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    vector<int> lucky;

    for (int i = A; i <= B; i++) {
        if (isLucky(i)) lucky.push_back(i);
    }

    if (lucky.empty()) {
        cout << -1 << "\n";
    } else {
        for (int i = 0; i < (int)lucky.size(); i++) {
            if (i) cout << " ";
            cout << lucky[i];
        }
        cout << "\n";
    }

    return 0;
}
