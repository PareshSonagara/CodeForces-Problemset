#include <bits/stdc++.h>
using namespace std;

bool check(string s,string x){
    if(s.size()>x.size()){
        return false;
    }
    else{
        for(int i=0;i<x.size()-s.size()+1;i++){
            if(x.substr(i,s.size())==s){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        string str1,str2;
        cin>>str1;
        cin>>str2;

        string x0=str1;
        string x1=x0+x0;
        string x2=x1+x1;
        string x3=x2+x2;
        string x4=x3+x3;
        string x5=x4+x4;

        int ans=-1;

        if(check(str2,x0)){
            ans=0;
        }
        else if(check(str2,x1)){
            ans=1;
        }
        else if(check(str2,x2)){
            ans=2;
        }
        else if(check(str2,x3)){
            ans=3;
        }
        else if(check(str2,x4)){
            ans=4;
        }
        else if(check(str2,x5)){
            ans=5;
        }

        cout<<ans<<endl;
    }
return 0;
}