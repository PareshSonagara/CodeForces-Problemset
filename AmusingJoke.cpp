#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str1,str2,str3;

    string result;

    cin>>str1>>str2>>str3;

    result=str1+str2;

    sort(str3.begin(),str3.end());
    sort(result.begin(),result.end());
    
    if(result==str3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}