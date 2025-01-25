#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;                         
    cin>>n;
    int count=0;
    while(n--){
        int num;
        cin>>num;
        if(num>0){
            sum+=num;
        }
        else{
            sum-=1;
            if(sum<0){
                count++;
                sum=0;
            }
        }
    }
    cout<<count;
return 0;
}