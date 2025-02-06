#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        
        int l,k;
        cin>>l>>k;
        int f=0;
        int vec=0;
        for(int i=0;i<l;i++){
            cin>>vec;
            if(vec==k){
                f=1;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}