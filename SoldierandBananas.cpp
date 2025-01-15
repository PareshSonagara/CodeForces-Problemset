#include <iostream>
using namespace std;
int main()
{
    int num,rs,initialPrice;
    cin>>initialPrice>>rs>>num;
    int result=0;

    for(int i=1;i<=num;i++){
        result+=i*initialPrice;
    }
    int final=result-rs;
    if(final>0){
        cout<<final;
    }
    else{
        cout<<"0";
    }
return 0;
}