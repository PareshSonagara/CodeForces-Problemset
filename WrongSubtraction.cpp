#include <iostream>
using namespace std;
int main()
{
    int i,number,k,count=0;

    cin>>number>>k;

    for(int i=1;i<=k;i++){
        if(number%10!=0){
            number-=1;
        }
        else{
            number/=10;
        }

        
    }
    cout<<number;
return 0;
}