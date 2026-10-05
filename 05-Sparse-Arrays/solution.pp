#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> freq;
    string s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        freq[s]++;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> s;
        cout << freq[s] << endl;
    }

    return 0;
}