/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: D
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
*/
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && i == N/2) {       // center
                cout << "X";
            }
            else if (i == j) {              // main diagonal
                cout << "\\";
            }
            else if (i + j == N - 1) {      // secondary diagonal
                cout << "/";
            }
            else {                          // all other positions
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

