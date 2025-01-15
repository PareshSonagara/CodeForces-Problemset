#include <iostream>
using namespace std;
int main()
{
    int c1,c2,c3,c4;
    cin>>c1>>c2>>c3>>c4;

    int ans=0;
    if(c1==c2||c1==c3||c1==c4) ans++;
    if(c2==c3||c2==c4) ans++;
    if(c3==c4) ans++;
    cout<<ans;
return 0;
}