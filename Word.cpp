#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    cin>>str;
    int upCount=0;
    int length=strlen(str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]<91){
            upCount++;
        }
    }
    if(upCount>length/2){
        strupr(str);
        cout<<str;
    }
    else{
        strlwr(str);
        cout<<str;
    }
return 0;
}