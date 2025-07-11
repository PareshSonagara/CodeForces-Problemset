#include <bits/stdc++.h>
#include <cctype>
using namespace std;

typedef long long int ll;
typedef vector<ll> llv;
typedef vector<vector<ll>> llvv;
typedef vector<pair<ll, ll>> llvp;
typedef map<ll, ll> llm;
typedef map<char, ll> lcm;
typedef unordered_map<ll, ll> llum;
typedef unordered_map<char, ll> lcum;
typedef set<ll> lls;
typedef pair<ll, ll> llp;
typedef queue<ll> llq;
typedef deque<ll> lldq;
typedef priority_queue<ll> llpq;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Krishna cout.tie(NULL);
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";
#define m1 cout << -1 << endl;
#define zero cout << 0 << "\n";
#define invec(a,n) for(ll i=0; i<n; i++) cin >> a[i];
#define outvec(a,n) for(ll i=0; i<n; i++) cout << a[i] << " "; cout << endl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, n) for(ll i = 0; i < n; i++)
#define fc(i, x, n) for(ll i = x; i < n; i++)
#define r return;
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define pf push_front

void solve() {
    ll n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> a(26,0),b(26,0);
    for(auto x:str){
        a[x - 'a']++;
    }
    int ans=0;

    for(auto x:str){
        a[x - 'a']--;
        b[x - 'a']++;
        int count = 0;
        for(int i = 0; i < 26; i++) {
            count += (min(1, a[i]) + min(1, b[i]));
        }
        ans = max(ans, count);
    }
    cout << ans << "\n";
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