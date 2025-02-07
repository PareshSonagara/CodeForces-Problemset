#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, E1, K, P;
    cin >> N >> E1 >> K >> P;

    long long top_five[5] = {0};
    long long current_energy = E1;

    for (long long i = 0; i < N; i++) {
        if (current_energy > top_five[0]) {
            top_five[0] = current_energy;
            sort(top_five, top_five + 5);
        }
        current_energy = (current_energy * K) % P;
    }

    for (int i = 0; i < 5; i++) {
        cout << top_five[i] << " ";
    }
    cout << endl;

    return 0;
}
