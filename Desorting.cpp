#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        long long mini=INT32_MAX;
        cin>>n;
        vector<long long> a(n);

        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        vector<long long> b(n);
        b=a;
        sort(b.begin(),b.end());

        if(b!=a){
            cout<<"0"<<endl;
        }
        else{
            for(long long i=1;i<n;i++){
                mini=min(mini,a[i]-a[i-1]);
            }
            cout<<mini/2+1<<endl;
        }   
    }
return 0;
}