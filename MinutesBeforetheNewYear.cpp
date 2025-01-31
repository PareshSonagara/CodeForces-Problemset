#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        int hour,minute;
        cin>>hour>>minute;

        int ans =(24-hour)*60;

        minute=ans-minute;

        cout<<minute<<endl;
    }
return 0;
}