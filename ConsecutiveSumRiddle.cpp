#include <iostream>
using namespace std;

void solveRiddle(int t) {
    while (t--) {
        long long n;
        cin >> n;
        long long l = -(n - 1);
        long long r = n;
        cout << l << " " << r << endl;
    }
}

int main() {
    int t;
    cin >> t;
    solveRiddle(t);
    return 0;
}
