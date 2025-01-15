#include <iostream>
using namespace std;
int main()
{
    long long number;
    cin>>number;
    int rem,luckey=0;

    while(number>0){
        rem=number%10;
        number/=10;
        if(rem==4||rem==7){
            luckey++;
        }
    }
    if(luckey==0){
        cout<<"NO";
    }
    else{
    int islucky=1;
    while(luckey!=0){
        rem=luckey%10;
        luckey/=10;
        if(rem!=4&&rem!=7){
            islucky=0;
        }
    }
    if(islucky){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    }
return 0;
}