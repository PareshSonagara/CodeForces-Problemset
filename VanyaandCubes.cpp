#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0, used = 0, level = 1;

    while (n) {
        int currentCube = (level * (level + 1)) / 2; 
        if (used + currentCube > n) break;

        used += currentCube;
        height++;
        level++;
    }

    cout << height << endl;
    return 0;
}