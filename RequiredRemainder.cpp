#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        int x,y,k;
        cin>>x>>y>>k;

        cout<<((k-y)/x)*x+y<<endl;

    }
return 0;
}