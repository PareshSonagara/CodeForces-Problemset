#include <bits/stdc++.h>
#include <cctype>
using namespace std;

typedef long long int ll;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
typedef map<ll, ll> mll;
typedef map<char, ll> mcl;
typedef unordered_map<ll, ll> umll;
typedef unordered_map<char, ll> umcl;
typedef set<ll> sll;
typedef pair<ll, ll> pll;
typedef queue<ll> qll;
typedef deque<ll> dqll;
typedef priority_queue<ll> pqll;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Krishna cout.tie(NULL);
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define nope cout << -1 << endl;
#define ZZ cout << 0 << "\n";
#define cspace cout << "\n";
#define endl '\n'
#define inarr(a,n) for(ll i=0; i<n; i++) cin >> a[i];
#define outarr(a,n) for(ll i=0; i<n; i++) cout << a[i] << " "; cout << endl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (ll)(v.size())
#define fl(i, n) for(ll i = 0; i < n; i++)
#define f(i, x, n) for(ll i = x; i < n; i++)
#define rf(i, n) for(ll i = n - 1; i >= 0; i--)
#define RR return;
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define pf push_front

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    long long dash= 0, underscore = 0;
    for (char c : s) {
        if (c == '-') dash++;
        else if (c == '_') underscore++;
    }
    
    if (dash < 2 || underscore < 1 || n < 3) {
        cout << 0 << endl;
        return;
    }
    
    long long left_dashes = dash/ 2;
    long long right_dashes = dash - left_dashes;
    
    long long result = left_dashes * underscore * right_dashes;
    
    cout << result << endl;
}

int main() {
    Jay Shree Krishna
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}