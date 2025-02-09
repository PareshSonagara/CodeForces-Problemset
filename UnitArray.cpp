#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pos=0,neg=0,ans=0;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]==1){
                pos++;
            }
            else{
                neg++;
            }
        }

        if(pos<neg){
            ans=(neg-pos+1)/2; 
            pos+=ans;
            neg-=ans;
        }
        if(neg%2){
            ans+=1;
        }
        cout<<ans<<endl;
    }
return 0;
}