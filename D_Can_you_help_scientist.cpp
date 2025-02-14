#include <iostream>
using namespace std;

long long sparsest_number(long long a, long long b) {
    if ((a & (a - 1)) == 0) return a;

    for (long long power = 1; power <= b; power <<= 1) {
        if (power >= a) return power;
    }
    
    long long result = a, min_ones = __builtin_popcountll(a);
    for (long long num = a; num <= b; num++) {
        int ones_count = __builtin_popcountll(num);
        if (ones_count < min_ones || (ones_count == min_ones && num < result)) {
            min_ones = ones_count;
            result = num;
        }
        if (ones_count == 1) break; 
    }
    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << sparsest_number(a, b) << endl;
    return 0;
}
