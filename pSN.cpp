/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: N
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char S;
    cin >> S;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        for (int j = 0; j < X; j++) {
            cout << S;
        }
        cout << "\n";
    }

    return 0;
}
