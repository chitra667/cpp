#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {0, 1, 0, 3, 12, 0, 5};

    int insertPos = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0) {
            v[insertPos++] = v[i];
        }
    }
    while (insertPos < v.size()) {
        v[insertPos++] = 0;
    }

    for (int x : v) cout << x << " "; } 