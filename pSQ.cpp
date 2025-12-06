/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: Q
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (N == 0) {  
            cout << 0 << "\n";  
            continue;
        }

        vector<int> digits;

        while (N > 0) {
            digits.push_back(N % 10);
            N /= 10;
        }

        for (int i = 0; i < digits.size(); i++) {
            cout << digits[i];
            if (i + 1 < digits.size()) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

