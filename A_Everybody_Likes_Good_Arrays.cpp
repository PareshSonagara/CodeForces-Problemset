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
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(vec[i]%2==0 && vec[i+1]%2==0){
                count++;
            }
            else if(vec[i]%2!=0 && vec[i+1]%2!=0){
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}