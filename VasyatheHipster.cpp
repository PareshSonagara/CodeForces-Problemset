#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int max;
    int minimun=min(a,b);
    if(minimun==a){
         max=b;
    }
    else{
         max=a;
    }
    int ans1=minimun;
    int x = max-minimun;
    int ans2=x/2;

    cout<<ans1<<" "<<ans2;

return 0;
}