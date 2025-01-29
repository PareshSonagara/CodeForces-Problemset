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
        if(a<c&&b<c&&a<b){
            cout<<"STAIR"<<endl;
        }
        else if(a<b&&c<b){
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }
    }
return 0;
}