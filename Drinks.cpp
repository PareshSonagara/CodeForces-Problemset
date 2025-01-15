#include <iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double sum=0;
    double tem=n,x;

    while(n--){
        cin>>x;
        sum+=x;
    }
    cout<<sum/tem;
return 0;
}