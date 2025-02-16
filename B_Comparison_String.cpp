#include <bits/stdc++.h>
using namespace std;
 
int minCost(int n, string s) {
    int maxInc = 0, maxDec = 0;
    int currInc = 0, currDec = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '<') {
            currInc++;
            currDec = 0;  
        } else { 
            currDec++;
            currInc = 0; 
        }
 
        maxInc = max(maxInc, currInc);
        maxDec = max(maxDec, currDec);
    }
 
    return max(maxInc, maxDec) + 1;
}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << minCost(n, s) << endl;
    }
 
    return 0;
}