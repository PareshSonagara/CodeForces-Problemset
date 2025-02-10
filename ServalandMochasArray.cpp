#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int> vec(n);

        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(vec[i],vec[j])<=2){
                    ans=1;
                    break;
                }
            }
        }

        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"No\n";
        }
    }
return 0;
}