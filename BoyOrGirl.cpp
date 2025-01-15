#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[101];
    scanf("%s",str);
    int count=0;

    for(int i=0;str[i]!='\0';i++){
        int isUniq=1;
        char chr=str[i];
        for(int j=0;j<i;j++){
            if(chr==str[j]){
                isUniq=0;
                break;
            }
        }
        if(isUniq){
            count+=1;
        }
    }

   
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
return 0;
}