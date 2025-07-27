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
#define invec(a, n)            \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define outvec(a, n)           \
    for (ll i = 0; i < n; i++) \
        cout << a[i] << " ";   \
    cout << endl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define f(i, n) for (ll i = 0; i < n; i++)
#define fc(i, x, n) for (ll i = x; i < n; i++)
#define r return;
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define pf push_front

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll>(3));
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i][0]; 
            arr[i][1] = i + 1; 
        }
        
        sort(rall(arr));
        
        ll T = 0;
        int c = 1;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i][2] = c;
            } else {
                arr[i][2] = -c;
                c++;
            }
            T += 2LL * arr[i][0] * abs(arr[i][2]);
            swap(arr[i][0], arr[i][1]); 
        }
        
        sort(arr.begin(), arr.end());
        
        cout << T << "\n";
        cout << 0 << " ";
        for (int i = 0; i < n; i++) cout << arr[i][2] << " ";
        cout << "\n";
    
}

int main()
{
    Jay Shree Krishna
        ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}