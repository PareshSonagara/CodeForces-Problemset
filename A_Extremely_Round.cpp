#include <iostream>
#include <vector>
using namespace std;

int count(int n) {
    int count = 0;
    for (int digit = 1; digit <= 9; digit++) {
        int num = digit;
        while (num <= n) {
            count++;
            num *= 10;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << count(n) << endl;
    }
    return 0;
}
