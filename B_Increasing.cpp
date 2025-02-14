#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            s.insert(vec[i]);
        }

        if(s.size()==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}