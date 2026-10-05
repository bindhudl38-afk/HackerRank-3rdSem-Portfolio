#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12)
            hour = 0;
    }
    else {
        if (hour != 12)
            hour += 12;
    }

    cout << setfill('0') << setw(2) << hour << s.substr(2, 6);

    return 0;
}