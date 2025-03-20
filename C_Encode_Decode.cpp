#include <bits/stdc++.h>
using namespace std;

char shift_char(char c, int s, bool encode) {
    if (encode) {
        return 'a' + (c - 'a' + s) % 26;
    } else {
        return 'a' + (c - 'a' - s + 26) % 26;
    }
}

void solve() {
    char mode;
    int s;
    string w;
    
    cin >> mode >> s >> w;
    bool encode = (mode == 'E');
    
    for (char &c : w) {
        c = shift_char(c, s, encode);
    }
    
    cout << w << "\n";
}

int main() {
    solve();
    return 0;
}
