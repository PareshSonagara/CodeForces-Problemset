#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long count = 0;
    vector<int> vec(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> vec[i];
        if (vec[i] == 2) {
            count++;
        }
    }

    if (count % 2 != 0) {
        cout << "-1" << endl;
    } else if (count == 0) {
        cout << "1" << endl;
    } else {
        int occurrences = 0;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (vec[i] == 2) {
                occurrences++;
            }
            if (occurrences == count / 2) {
                index = i + 1;
                break;
            }
        }
        cout << index << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
