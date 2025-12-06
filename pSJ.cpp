/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: J
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N)) return 0;
    if (N < 2) return 0;
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= N; ++p) if (isPrime[p])
        for (int k = p*p; k <= N; k += p) isPrime[k] = false;
    bool first = true;
    for (int i = 2; i <= N; ++i) if (isPrime[i]) {
        if (!first) cout << ' ';
        first = false;
        cout << i;
    }
    cout << '\n';
}

