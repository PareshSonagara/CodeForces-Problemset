#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;

    int Barley = a * x;
    int Hops = b * y;
    int Malt = c * z;

    int maxPoints = max({Barley,Hops,Malt});

    vector<string> winners;

    if (Barley == maxPoints) winners.push_back("Barley");
    if (Hops == maxPoints) winners.push_back("Hops");
    if (Malt == maxPoints) winners.push_back("Malt");

    sort(winners.begin(), winners.end());

    for (int i = 0; i < winners.size(); ++i) {
        if (i > 0) cout << " ";
        cout << winners[i];
    }
    cout << endl;

    return 0;
}
