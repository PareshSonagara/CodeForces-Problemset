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
    ll x,y,z;
    cin>>x>>y>>z;
    if(x!=y&&y!=z&&x!=z){
        no
    }
    else{
        if (x == y && x >= z)
			{
				cout << "YES" << endl;
				cout << x << " " << 1 << " " << z << endl;
			}
			else if (y == z && y >= x)
			{
				cout << "YES" << endl;
				cout << x << " " << y << " " << 1 << endl;
			}
			else if (z == x && x >= y)
			{
				cout << "YES" << endl;
				cout << x << " " << y << " " << 1 << endl;
			}
			else
				cout << "NO" << endl;
    }
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