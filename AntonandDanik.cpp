#include <iostream>
using namespace std;
int main()
{
    long n;
    char str[1000000];
    cin>>n;
    cin>>str;

    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            count1++;
        }
        else{
            count2++;
        }
    }

    if(count1>count2){
        cout<<"Anton";
    }

    else if(count1<count2){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
return 0;
}