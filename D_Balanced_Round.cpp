#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,dif;
        cin>>n>>dif;

        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }

        sort(vec.begin(),vec.end());

        long long ans=n-1;
        long long mini=0;
        for(int i=0;i<n-1;i++){
            if(vec[i+1]-vec[i]<=dif){
                mini++;
                ans=min(n-mini-1,ans);
            }
            else{
                mini=0;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}