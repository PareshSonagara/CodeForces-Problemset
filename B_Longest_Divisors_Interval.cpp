#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum=1;
        for(long long i=2;i<=n&&n%i==0;i++){
            sum++;
        }

        cout<<sum<<endl;
    }
return 0;
}