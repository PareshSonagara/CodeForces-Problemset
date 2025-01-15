#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int x,hard=0;
    while(number--){
        cin>>x;
        if(x==1){
            hard=1;
        }
    }
    if(hard){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
return 0;
}