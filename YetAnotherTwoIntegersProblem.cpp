#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--){
        int a,b;
        cin>>a>>b;
        int dif=abs(a-b);
        int ans=(dif+9)/10;

        cout<<ans<<endl;
    }
return 0;
}