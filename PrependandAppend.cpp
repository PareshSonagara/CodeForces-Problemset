#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i=0,en=n-1;
        while(i<n&&(str[i]=='0'&&str[en]=='1')||(str[i]=='1'&&str[en]=='0')){
            i++;
            en--;
        }
        if(en-i+1<0){
            cout<<"0"<<endl;
        }
        else{
            cout<<en-i+1<<endl;
        }
        
    }
return 0;
}