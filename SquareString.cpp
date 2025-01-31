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
        int n;
        n=str.length();

        if(n%2!=0){
            cout<<"NO"<<endl;
        }
        else if(str.substr(0,n/2)==str.substr(n/2,n/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}