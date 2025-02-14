#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s,p;
    cin>>n>>m>>s>>p;
    int totalSec=n*(m*60+s)+(n-1)*p;
    cout<<totalSec/60<<endl;
    cout<<totalSec%60<<endl;
return 0;
}