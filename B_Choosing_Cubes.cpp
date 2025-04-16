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
    int n , f , k;
        cin>>n>>f>>k;
        vector<int> v(n);
        for (int i = 0 ;i<n ; i++) cin>>v[i];
        int fav_number= v[f-1];
        int counter_fav = 0;
        for (int i = 0 ;i<n ; i++)
        {
            if (v[i]==fav_number) counter_fav++;
        }
        sort(v.rbegin(),v.rend());
        int t_counter_fav= counter_fav;
        for (int i = 0 ; i < k ; i++)
        {
            if (v[i]==fav_number) counter_fav--;
        }
        if (counter_fav==0 ) cout<<"YES"<<endl;
        else if (counter_fav==t_counter_fav) cout<<"NO"<<endl;
        else if (counter_fav>0 && counter_fav<t_counter_fav) cout<<"Maybe"<<endl;
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