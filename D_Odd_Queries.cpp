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
    ll n,q;
    cin>>n>>q;
    vll vec(n+1);
    f(i,1,n+1){
        cin>>vec[i];
    }
    vll pSum(n+1);
    f(i,1,n+1){
        pSum[i]=pSum[i-1]+vec[i];
    }
    fl(i,q){
        ll l,r,k;
        cin>>l>>r>>k;
        ll ans=pSum[n]+pSum[l-1]-pSum[r]+(r-l+1)*k;
        if(ans%2!=0){
            yes;
        }
        else{
            no;
        }
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