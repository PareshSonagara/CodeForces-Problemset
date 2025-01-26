#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;

    while(num--){
        string str;
        cin>>str;

        if(str[0]!='Y'&&str[0]!='y'){
            cout<<"NO"<<endl;
        }
        else if(str[1]!='E'&&str[1]!='e'){
            cout<<"NO"<<endl;
        }
        else if(str[2]!='S'&&str[2]!='s'){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
       }
    }
return 0;
}