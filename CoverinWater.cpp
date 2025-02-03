#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,isfound=0;
        int count=0;
        cin>>n;
        string str;
        cin>>str;

        for(int i=0;i<n;i++){
            if(str[i]=='.'){
                count++;
            }
        }

        for(int i=0;i<=n-3;i++) {
            if(str.substr(i,3)=="..."){
                isfound=1;
                break;
            }
        }

        if(isfound){
            cout<<"2"<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
return 0;
}