#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> vec(n);
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            mini = min(mini, vec[i]);
        }

        for(int i:vec){
            sum+=i-mini;
        }
        cout<<sum<<endl;
    }
return 0;
}