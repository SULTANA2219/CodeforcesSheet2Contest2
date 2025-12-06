/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: G
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n, s;
        cin >> n >> s;

        long long max_sum = n * (n + 1) / 2;
        if (s > max_sum) {
            cout << -1 << endl;
            continue;
        }

        vector<long long> result;
        for (long long i = n; i >= 1; i--) {
            if (s >= i) {
                result.push_back(i);
                s -= i;
            }
            if (s == 0) break;
        }

        for (size_t i = 0; i < result.size(); i++) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}

