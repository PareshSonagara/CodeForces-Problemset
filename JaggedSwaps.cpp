#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        // vector<int> sortedVec = vec;
        // sort(sortedVec.begin(), sortedVec.end());

     
        // bool sorted = false;
        // while (!sorted) {
        //     sorted = true;
        //     for (int i = 1; i < n - 1; i++) {
        //         if (vec[i - 1] < vec[i] && vec[i] > vec[i + 1]) {
        //             swap(vec[i], vec[i + 1]);
        //             sorted = false; 
        //         }
        //     }
        // }

        cout << (vec[0]==1 ? "YES" : "NO") << endl;
    }

    return 0;
}
