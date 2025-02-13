#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;
    long long miniSum=k*(k+1)/2;
    long long maxSum=k*(2*n+1-k)/2;
    if(x<=maxSum&&x>=miniSum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}