#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int ans=0,pre=0;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;

            ans=max(ans,a-pre);

            pre=a;
        }

        ans=max(ans,2*(k-pre));

        cout<<ans<<endl;
    }
return 0;
}