/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: A
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A
*/


#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long result = a - b;
    if (result > 0) {
        cout << result << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
