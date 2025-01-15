#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
       if(a[i]%b[i]==0){
        cout<<0<<endl;
       }
       else{
        int ans=a[i]/b[i];
       ans = (ans+1)*b[i]-a[i];
       cout<<ans<<endl;
       }
    }
return 0;
}