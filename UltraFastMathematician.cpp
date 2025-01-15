#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[101],str2[101];
    cin>>str1;
    cin>>str2;
    char ans[101];
    int i;

    for(i=0;i<strlen(str1);i++){
        if(str1[i]==str2[i]){
            ans[i]='0';
        }
        else{
            ans[i]='1';
        }
    }
    ans[i]='\0';
    cout<<ans;
return 0;
}