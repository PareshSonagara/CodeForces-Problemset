#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int a,b;

        cin>>a>>b;
        int area;
        if(a>b){
            if(2*b>a){
                area=4*b*b;
            }
            else{
                area=a*a;
            }
        }
        else{
            if(2*a>b){
                area=4*a*a;
            }
            else{
                area=b*b;
            }
        }

        cout<<area<<endl;
    }
return 0;
}