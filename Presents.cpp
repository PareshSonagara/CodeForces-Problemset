#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int tem;
    int str[num];
    int result[num];
    for(int i=0;i<num;i++){
       cin>>str[i];
       result[str[i]-1]=i+1;
    }

    for(int i=0;i<num;i++){
        cout<<result[i]<<" ";
    }
return 0;
}