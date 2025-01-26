#include <iostream>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int count=0;
    int num=k;

    while(k){
        if(num%10==r||num%10==0){
            count++;
            break;
        }
        count++;
        num=num+k;
    }
    cout<<count;
return 0;
}