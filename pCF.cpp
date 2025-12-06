/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: F
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int maxDivisions = 0;

    for (int i = 0; i < N; i++) {
        long long x = arr[i];
        int count = 0;
        while (x % 2 == 0) {  // divide by 2 until it's odd
            x /= 2;
            count++;
        }
        if (count > maxDivisions) {
            maxDivisions = count;
        }
    }

    cout << maxDivisions << endl;
    return 0;
}

