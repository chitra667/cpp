#include <bits/stdc++.h>
using namespace std;

int countFrequency(vector<int>& v, int target) {
    int count = 0;
    for (int x : v)
        if (x == target) count++;
    return count;
}

int main() {
    vector<int> v = {1, 2, 3, 2, 4, 2, 5};
    cout << "Frequency of 2: " << countFrequency(v, 2) << endl; 
}