#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[1001];
    scanf("%s",str);
    if(str[0]>=97){
    str[0]-=32;
    }
    printf("%s",str);   
return 0;
}