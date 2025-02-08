#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec[i]=abs(temp);
    }
    sort(vec.begin(),vec.end());

    cout<<abs(vec[0])<<endl;
return 0;
}