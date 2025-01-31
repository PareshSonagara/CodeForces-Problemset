#include <iostream>
#include <set>
using namespace std;

void check(string str, int n) {
    set<char> seen;
    char last_task = '\0';

    for (int i = 0; i < n; i++) {
        if (str[i] != last_task) {
            if (seen.count(str[i])) {
                cout << "NO" << endl;
                return;
            }
            seen.insert(str[i]);
            last_task = str[i];
        }
    }

    cout << "YES" << endl;
}

int main() {
    int num;
    cin >> num;

    while (num--) {
        int n;
        string str;
        cin >> n >> str;
        check(str, n);
    }

    return 0;
}
