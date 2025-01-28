#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int maxi=max({n,m});

    int a=7-maxi;
    int gcd = __gcd(a,6);

    cout<<a/gcd<<"/"<<6/gcd<<endl;
return 0;
}