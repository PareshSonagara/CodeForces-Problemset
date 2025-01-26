#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalDrink=k*l/nl;
    int totalSlice=c*d;
    int solt=p/np;

    vector<int> ans;

    ans.push_back(totalDrink);
    ans.push_back(totalSlice);
    ans.push_back(solt);
    sort(ans.begin(),ans.end());

    cout<<ans[0]/n;   
return 0;
}