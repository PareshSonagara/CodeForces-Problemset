#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = n / 2;
    if (n % 2 == 1) {
        count--;
    }

    cout << count + (n % 2) << endl;

    for (int i = 0; i < count; i++) {
        cout << 2 << " ";
    }
    if (n % 2 == 1) {
        cout << 3;
    }
    cout << endl;

    return 0;
}
