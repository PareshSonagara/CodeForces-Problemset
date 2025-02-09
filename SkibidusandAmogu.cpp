#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> ans;
    
    while (t--) {
        string W;
        cin >> W;

        string plural = W.substr(0, W.size() - 2) + "i";
        ans.push_back(plural);
    }

    for (const string& i : ans) {
        cout << i << endl;
    }

    return 0;
}