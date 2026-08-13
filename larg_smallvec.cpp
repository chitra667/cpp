#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {8, 3, 9, 1, 6, 2};

    int largest = v[0], smallest = v[0];
    for (int x : v) {
        if (x > largest) largest = x;
        if (x < smallest) smallest = x;
    }

    cout << "Largest: " << largest << endl;   
    cout << "Smallest: " << smallest << endl; 

    
}