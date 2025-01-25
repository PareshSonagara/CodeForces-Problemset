#include <iostream>
using namespace std;
int main()
{
    int problem,time;
    cin>>problem>>time;
    time=240-time;
    int result=0;
    int count=0;

    for(int i=1;i<=problem;i++){
        result+=i*5;
        if(result>time){
            break;
        }
        count++;
    }
    cout<<count;
return 0;
}