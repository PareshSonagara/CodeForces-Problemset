#include <iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int cpy;
    while(year<10001){
        year++;
        cpy=year;
        int count=0;
        char str[10]={0};
        for(int i=0;i<4;i++){
            int rem=cpy%10;
            if(str[rem]>0){
                break;
            }
            else{
                count++;
            }
            str[rem]++;
            cpy/=10;
        }
        if(count>=4){
            cout<<year;
            break;
        }
    }
return 0;
}