#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int n,c1,c2;
        cin>>n;
        c2=n/3;
        c1=n-2*c2;

        if(abs(c1-c2)>1){
            if(c1>c2){
                c1-=2;
                c2+=1;
            }
            else{
                c1+=2;
                c2-=1;
            }
        }
        cout<<c1<<endl;
        cout<<c2<<endl;
    }
return 0;
}