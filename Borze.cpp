#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str,ans="";

    cin>>str;

    for(int i=0;i<str.length();i++){
        if(str[i]=='.'){
            ans+='0';
        }
        else if(str[i]=='-' && str[i+1]=='.'&& i+1<str.length()){
            ans+='1';
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='-'& i+1<str.length()){
            ans+='2';
            i++;
        }
    }
    cout<<ans;
return 0;
}