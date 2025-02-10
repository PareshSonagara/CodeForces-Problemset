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
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            ans=(vec[i]^ans);
        }

        if(ans==0){
            cout<<"0"<<endl;
        }
        else if(n&1){
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
return 0;
}