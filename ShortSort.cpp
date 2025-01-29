#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        string str;
        cin>>str;

        if(str=="cab"||str=="bca"){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
return 0;
}