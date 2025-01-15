#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int x,y;
    int count=0;
    while(number--){
        cin>>x>>y;
        if(y-x>=2){
            count++;
        }
    }
    cout<<count;

return 0;
}