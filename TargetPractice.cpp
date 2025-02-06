#include <bits/stdc++.h>
using namespace std;

int get_points[10][10]={
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1},
        };

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int total_points = 0;
        vector<string> target(10);
        for (int i = 0; i < 10; ++i) {
            cin >> target[i];
        }
        
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (target[i][j] == 'X') {
                    total_points += get_points[i][j];
                }
            }
        }
        
        cout << total_points << endl;
    }
    
    return 0;
}