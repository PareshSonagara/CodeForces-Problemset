#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        int a,b,c;

        cin>>a>>b>>c;
        int total=a+b+c;
        int mini=min({a,b,c});

        if(total-mini>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}    