#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> v = {'a', 'b', 'c', 'e', 'x', 'o', 'z'};

    int vowels = 0, consonants = 0;
    string vowelSet = "aeiouAEIOU";

    for (char ch : v) {
        if (isalpha(ch)) {
            if (vowelSet.find(ch) != string::npos)
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;         
    cout << "Consonants: " << consonants << endl; 
}