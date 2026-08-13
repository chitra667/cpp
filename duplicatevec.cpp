#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {4, 2, 4, 1, 2, 5, 1};
    unordered_set<int> seen;
    vector<int> result;

    for (int x : v) {
        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            result.push_back(x);
        }
    }

    for (int x : result) cout << x << " "; 
}