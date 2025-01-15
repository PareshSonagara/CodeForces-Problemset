#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ans;
    if(n%2==0){
        cout<<n/2;
    }
    else{
        cout<<-(1+n)/2;
    }
return 0;
}