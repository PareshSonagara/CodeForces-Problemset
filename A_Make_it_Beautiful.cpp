#include <bits/stdc++.h>
using namespace std;

void solve(){
   abc:
   long long n;
    cin>>n;
    vector<long long> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    swap(vec[0],vec[1]);
    swap(vec[n-1],vec[0]);
    
    if(vec[0]==vec[1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i:vec){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}