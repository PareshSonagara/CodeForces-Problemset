#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n+1];
    cin>>str;
    str[n]='\0';
    int count=0;

    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }

    cout<<count;

return 0;
}