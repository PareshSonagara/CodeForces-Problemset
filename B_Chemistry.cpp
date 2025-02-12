#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        map<char,int> mp;
        for(auto i:str){
            mp[i]++;
        }
        int odd=0;
        for(auto i:mp){
            int num=i.second;
            if(num%2!=0){
                odd++;
            }
        }

        if(k<odd-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
return 0;
}