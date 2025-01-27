#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b==c){
            cout<<"+"<<endl;
        }
        else{
            cout<<"-"<<endl;
        }
    }
return 0;
}