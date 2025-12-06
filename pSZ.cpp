/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: Z
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;
    long long cnt = 0;
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            int z = S - x - y;
            if (z >= 0 && z <= K) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
