#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> digits(n);
        
        int product = 1;
        int zero = 0; 

        for (int i = 0; i < n; ++i) {
            cin >> digits[i];
            if (digits[i] == 0) {
                zero++;  
            } else {
                product *= digits[i];
            }
        }

        if (zero==1) {
            cout << max(product, 1) << endl;
        }
        else if(zero>1){
            cout<<"0"<<endl;
        }
        else {
            int maxi = 0;
            for (int i = 0; i < n; ++i) {
                int ans = product / digits[i] * (digits[i] + 1);
                maxi = max(maxi, ans);
            }
            cout << maxi << endl;
        }
    }

    return 0;
}
